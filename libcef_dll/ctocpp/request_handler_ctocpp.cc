// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
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
// $hash=cac9a84a4ddb5aa01e9c6fc97f5c4bcb4f4c368f$
//

#include "libcef_dll/ctocpp/request_handler_ctocpp.h"
#include "libcef_dll/cpptoc/auth_callback_cpptoc.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/cpptoc/request_callback_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/select_client_certificate_callback_cpptoc.h"
#include "libcef_dll/cpptoc/sslinfo_cpptoc.h"
#include "libcef_dll/cpptoc/x509certificate_cpptoc.h"
#include "libcef_dll/ctocpp/resource_request_handler_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::OnBeforeBrowse(CefRefPtr<CefBrowser> browser,
                                             CefRefPtr<CefFrame> frame,
                                             CefRefPtr<CefRequest> request,
                                             bool user_gesture,
                                             bool is_redirect) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_before_browse))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;

  // Execute
  int _retval = _struct->on_before_browse(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      CefRequestCppToC::Wrap(request), user_gesture, is_redirect);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::OnOpenURLFromTab(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    const CefString& target_url,
    WindowOpenDisposition target_disposition,
    bool user_gesture) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_open_urlfrom_tab))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: target_url; type: string_byref_const
  DCHECK(!target_url.empty());
  if (target_url.empty())
    return false;

  // Execute
  int _retval = _struct->on_open_urlfrom_tab(
      _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
      target_url.GetStruct(), target_disposition, user_gesture);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefResourceRequestHandler> CefRequestHandlerCToCpp::
    GetResourceRequestHandler(CefRefPtr<CefBrowser> browser,
                              CefRefPtr<CefFrame> frame,
                              CefRefPtr<CefRequest> request,
                              bool is_navigation,
                              bool is_download,
                              const CefString& request_initiator,
                              bool& disable_default_handling) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_resource_request_handler))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return nullptr;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return nullptr;
  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return nullptr;
  // Unverified params: request_initiator

  // Translate param: disable_default_handling; type: bool_byref
  int disable_default_handlingInt = disable_default_handling;

  // Execute
  cef_resource_request_handler_t* _retval =
      _struct->get_resource_request_handler(
          _struct, CefBrowserCppToC::Wrap(browser), CefFrameCppToC::Wrap(frame),
          CefRequestCppToC::Wrap(request), is_navigation, is_download,
          request_initiator.GetStruct(), &disable_default_handlingInt);

  // Restore param:disable_default_handling; type: bool_byref
  disable_default_handling = disable_default_handlingInt ? true : false;

  // Return type: refptr_same
  return CefResourceRequestHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::GetAuthCredentials(
    CefRefPtr<CefBrowser> browser,
    const CefString& origin_url,
    bool isProxy,
    const CefString& host,
    int port,
    const CefString& realm,
    const CefString& scheme,
    CefRefPtr<CefAuthCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_auth_credentials))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: origin_url; type: string_byref_const
  DCHECK(!origin_url.empty());
  if (origin_url.empty())
    return false;
  // Verify param: host; type: string_byref_const
  DCHECK(!host.empty());
  if (host.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;
  // Unverified params: realm, scheme

  // Execute
  int _retval = _struct->get_auth_credentials(
      _struct, CefBrowserCppToC::Wrap(browser), origin_url.GetStruct(), isProxy,
      host.GetStruct(), port, realm.GetStruct(), scheme.GetStruct(),
      CefAuthCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::OnQuotaRequest(
    CefRefPtr<CefBrowser> browser,
    const CefString& origin_url,
    int64 new_size,
    CefRefPtr<CefRequestCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_quota_request))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: origin_url; type: string_byref_const
  DCHECK(!origin_url.empty());
  if (origin_url.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = _struct->on_quota_request(
      _struct, CefBrowserCppToC::Wrap(browser), origin_url.GetStruct(),
      new_size, CefRequestCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::OnCertificateError(
    CefRefPtr<CefBrowser> browser,
    cef_errorcode_t cert_error,
    const CefString& request_url,
    CefRefPtr<CefSSLInfo> ssl_info,
    CefRefPtr<CefRequestCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_certificate_error))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: request_url; type: string_byref_const
  DCHECK(!request_url.empty());
  if (request_url.empty())
    return false;
  // Verify param: ssl_info; type: refptr_diff
  DCHECK(ssl_info.get());
  if (!ssl_info.get())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = _struct->on_certificate_error(
      _struct, CefBrowserCppToC::Wrap(browser), cert_error,
      request_url.GetStruct(), CefSSLInfoCppToC::Wrap(ssl_info),
      CefRequestCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefRequestHandlerCToCpp::OnSelectClientCertificate(
    CefRefPtr<CefBrowser> browser,
    bool isProxy,
    const CefString& host,
    int port,
    const X509CertificateList& certificates,
    CefRefPtr<CefSelectClientCertificateCallback> callback) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_select_client_certificate))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: host; type: string_byref_const
  DCHECK(!host.empty());
  if (host.empty())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Translate param: certificates; type: refptr_vec_diff_byref_const
  const size_t certificatesCount = certificates.size();
  cef_x509certificate_t** certificatesList = NULL;
  if (certificatesCount > 0) {
    certificatesList = new cef_x509certificate_t*[certificatesCount];
    DCHECK(certificatesList);
    if (certificatesList) {
      for (size_t i = 0; i < certificatesCount; ++i) {
        certificatesList[i] = CefX509CertificateCppToC::Wrap(certificates[i]);
      }
    }
  }

  // Execute
  int _retval = _struct->on_select_client_certificate(
      _struct, CefBrowserCppToC::Wrap(browser), isProxy, host.GetStruct(), port,
      certificatesCount, certificatesList,
      CefSelectClientCertificateCallbackCppToC::Wrap(callback));

  // Restore param:certificates; type: refptr_vec_diff_byref_const
  if (certificatesList)
    delete[] certificatesList;

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefRequestHandlerCToCpp::OnPluginCrashed(CefRefPtr<CefBrowser> browser,
                                              const CefString& plugin_path) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_plugin_crashed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;
  // Verify param: plugin_path; type: string_byref_const
  DCHECK(!plugin_path.empty());
  if (plugin_path.empty())
    return;

  // Execute
  _struct->on_plugin_crashed(_struct, CefBrowserCppToC::Wrap(browser),
                             plugin_path.GetStruct());
}

NO_SANITIZE("cfi-icall")
void CefRequestHandlerCToCpp::OnRenderViewReady(CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_render_view_ready))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_render_view_ready(_struct, CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
void CefRequestHandlerCToCpp::OnRenderProcessTerminated(
    CefRefPtr<CefBrowser> browser,
    TerminationStatus status) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_render_process_terminated))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_render_process_terminated(
      _struct, CefBrowserCppToC::Wrap(browser), status);
}

NO_SANITIZE("cfi-icall")
void CefRequestHandlerCToCpp::OnDocumentAvailableInMainFrame(
    CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_request_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_document_available_in_main_frame))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_document_available_in_main_frame(_struct,
                                               CefBrowserCppToC::Wrap(browser));
}

// CONSTRUCTOR - Do not edit by hand.

CefRequestHandlerCToCpp::CefRequestHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefRequestHandlerCToCpp::~CefRequestHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_request_handler_t* CefCToCppRefCounted<
    CefRequestHandlerCToCpp,
    CefRequestHandler,
    cef_request_handler_t>::UnwrapDerived(CefWrapperType type,
                                          CefRequestHandler* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefRequestHandlerCToCpp,
                                   CefRequestHandler,
                                   cef_request_handler_t>::kWrapperType =
    WT_REQUEST_HANDLER;
