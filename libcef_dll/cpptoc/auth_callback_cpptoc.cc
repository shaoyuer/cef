// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=708e231fbc5c80191b2a9ba3d6295a6b5ecf925e$
//

#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK auth_callback_cont(struct _cef_auth_callback_t* self,
                                     const cef_string_t* username,
                                     const cef_string_t* password) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Unverified params: username, password

  // Execute
  CefAuthCallbackCppToC::Get(self)->Continue(CefString(username),
                                             CefString(password));
}

void CEF_CALLBACK auth_callback_cancel(struct _cef_auth_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefAuthCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefAuthCallbackCppToC::CefAuthCallbackCppToC() {
  GetStruct()->cont = auth_callback_cont;
  GetStruct()->cancel = auth_callback_cancel;
}

// DESTRUCTOR - Do not edit by hand.

CefAuthCallbackCppToC::~CefAuthCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefAuthCallback> CefCppToCRefCounted<
    CefAuthCallbackCppToC,
    CefAuthCallback,
    cef_auth_callback_t>::UnwrapDerived(CefWrapperType type,
                                        cef_auth_callback_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefAuthCallbackCppToC,
                                   CefAuthCallback,
                                   cef_auth_callback_t>::kWrapperType =
    WT_AUTH_CALLBACK;
