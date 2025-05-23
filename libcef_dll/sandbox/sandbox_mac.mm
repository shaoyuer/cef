// Copyright 2018 The Chromium Embedded Framework Authors. Portions Copyright
// 2018 the Chromium Authors. All rights reserved. Use of this source code is
// governed by a BSD-style license that can be found in the LICENSE file.

#include <mach-o/dyld.h>
#include <stdio.h>

#include <memory>

#include "include/cef_sandbox_mac.h"
#include "sandbox/mac/seatbelt_exec.h"

void* cef_sandbox_initialize(int argc, char** argv) {
  uint32_t exec_path_size = 0;
  int rv = _NSGetExecutablePath(NULL, &exec_path_size);
  if (rv != -1) {
    return NULL;
  }

  std::unique_ptr<char[]> exec_path(new char[exec_path_size]);
  rv = _NSGetExecutablePath(exec_path.get(), &exec_path_size);
  if (rv != 0) {
    return NULL;
  }

  sandbox::SeatbeltExecServer::CreateFromArgumentsResult seatbelt =
      sandbox::SeatbeltExecServer::CreateFromArguments(exec_path.get(), argc,
                                                       argv);
  if (seatbelt.sandbox_required) {
    if (!seatbelt.server) {
      fprintf(stderr, "Failed to create the seatbelt sandbox server.\n");
      return NULL;
    }
    if (!seatbelt.server->InitializeSandbox()) {
      fprintf(stderr, "Failed to initialize the sandbox.\n");
      return NULL;
    }
  }

  auto* copy = new sandbox::SeatbeltExecServer::CreateFromArgumentsResult();
  copy->sandbox_required = seatbelt.sandbox_required;
  copy->server.swap(seatbelt.server);
  return copy;
}

void cef_sandbox_destroy(void* sandbox_context) {
  delete static_cast<sandbox::SeatbeltExecServer::CreateFromArgumentsResult*>(
      sandbox_context);
}
