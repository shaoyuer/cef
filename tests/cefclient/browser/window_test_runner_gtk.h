// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_GTK_H_
#define CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_GTK_H_
#pragma once

#include "tests/cefclient/browser/window_test_runner.h"

namespace client {
namespace window_test {

// GTK platform implementation.
class WindowTestRunnerGtk : public WindowTestRunner {
 public:
  WindowTestRunnerGtk();

  void Minimize(CefRefPtr<CefBrowser> browser) override;
  void Maximize(CefRefPtr<CefBrowser> browser) override;
  void Restore(CefRefPtr<CefBrowser> browser) override;
};

}  // namespace window_test
}  // namespace client

#endif  // CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_GTK_H_
