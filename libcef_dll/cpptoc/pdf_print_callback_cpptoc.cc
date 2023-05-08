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
// $hash=1ed6b4ab7a3ceeab451ba1b898ed91a88f483004$
//

#include "libcef_dll/cpptoc/pdf_print_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
pdf_print_callback_on_pdf_print_finished(struct _cef_pdf_print_callback_t* self,
                                         const cef_string_t* path,
                                         int ok) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }
  // Verify param: path; type: string_byref_const
  DCHECK(path);
  if (!path) {
    return;
  }

  // Execute
  CefPdfPrintCallbackCppToC::Get(self)->OnPdfPrintFinished(CefString(path),
                                                           ok ? true : false);
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefPdfPrintCallbackCppToC::CefPdfPrintCallbackCppToC() {
  GetStruct()->on_pdf_print_finished = pdf_print_callback_on_pdf_print_finished;
}

// DESTRUCTOR - Do not edit by hand.

CefPdfPrintCallbackCppToC::~CefPdfPrintCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefPdfPrintCallback> CefCppToCRefCounted<
    CefPdfPrintCallbackCppToC,
    CefPdfPrintCallback,
    cef_pdf_print_callback_t>::UnwrapDerived(CefWrapperType type,
                                             cef_pdf_print_callback_t* s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefPdfPrintCallbackCppToC,
                                   CefPdfPrintCallback,
                                   cef_pdf_print_callback_t>::kWrapperType =
    WT_PDF_PRINT_CALLBACK;
