// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
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

#ifndef CEF_LIBCEF_DLL_CTOCPP_DISPLAY_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_DISPLAY_HANDLER_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include <vector>
#include "include/cef_display_handler.h"
#include "include/capi/cef_display_handler_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefDisplayHandlerCToCpp
    : public CefCToCpp<CefDisplayHandlerCToCpp, CefDisplayHandler,
        cef_display_handler_t> {
 public:
  explicit CefDisplayHandlerCToCpp(cef_display_handler_t* str)
      : CefCToCpp<CefDisplayHandlerCToCpp, CefDisplayHandler,
          cef_display_handler_t>(str) {}
  virtual ~CefDisplayHandlerCToCpp() {}

  // CefDisplayHandler methods
  virtual void OnNavStateChange(CefRefPtr<CefBrowser> browser, bool canGoBack,
      bool canGoForward) OVERRIDE;
  virtual void OnAddressChange(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, const CefString& url) OVERRIDE;
  virtual void OnContentsSizeChange(CefRefPtr<CefBrowser> browser,
      CefRefPtr<CefFrame> frame, int width, int height) OVERRIDE;
  virtual void OnTitleChange(CefRefPtr<CefBrowser> browser,
      const CefString& title) OVERRIDE;
  virtual void OnFaviconURLChange(CefRefPtr<CefBrowser> browser,
      const std::vector<CefString>& icon_urls) OVERRIDE;
  virtual bool OnTooltip(CefRefPtr<CefBrowser> browser,
      CefString& text) OVERRIDE;
  virtual void OnStatusMessage(CefRefPtr<CefBrowser> browser,
      const CefString& value, StatusType type) OVERRIDE;
  virtual bool OnConsoleMessage(CefRefPtr<CefBrowser> browser,
      const CefString& message, const CefString& source, int line) OVERRIDE;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_DISPLAY_HANDLER_CTOCPP_H_

