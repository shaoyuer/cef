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
// $hash=7d80a2edec79db9cb7be6bc23a1103a9f55c66c1$
//

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include <algorithm>
#include "libcef_dll/ctocpp/browser_host_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"
#include "libcef_dll/transfer_util.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") CefRefPtr<CefBrowserHost> CefBrowserCToCpp::GetHost() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_host))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_host_t* _retval = _struct->get_host(_struct);

  // Return type: refptr_same
  return CefBrowserHostCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") bool CefBrowserCToCpp::CanGoBack() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_go_back))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->can_go_back(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserCToCpp::GoBack() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, go_back))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->go_back(_struct);
}

NO_SANITIZE("cfi-icall") bool CefBrowserCToCpp::CanGoForward() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, can_go_forward))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->can_go_forward(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserCToCpp::GoForward() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, go_forward))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->go_forward(_struct);
}

NO_SANITIZE("cfi-icall") bool CefBrowserCToCpp::IsLoading() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_loading))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_loading(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserCToCpp::Reload() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, reload))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->reload(_struct);
}

NO_SANITIZE("cfi-icall") void CefBrowserCToCpp::ReloadIgnoreCache() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, reload_ignore_cache))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->reload_ignore_cache(_struct);
}

NO_SANITIZE("cfi-icall") void CefBrowserCToCpp::StopLoad() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, stop_load))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->stop_load(_struct);
}

NO_SANITIZE("cfi-icall") int CefBrowserCToCpp::GetIdentifier() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_identifier))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_identifier(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserCToCpp::IsSame(CefRefPtr<CefBrowser> that) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct, CefBrowserCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefBrowserCToCpp::IsPopup() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_popup))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_popup(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefBrowserCToCpp::HasDocument() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_document))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_document(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefFrame> CefBrowserCToCpp::GetMainFrame() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_main_frame))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = _struct->get_main_frame(_struct);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefFrame> CefBrowserCToCpp::GetFocusedFrame() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_focused_frame))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = _struct->get_focused_frame(_struct);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefFrame> CefBrowserCToCpp::GetFrame(int64 identifier) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_byident))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_frame_t* _retval = _struct->get_frame_byident(_struct, identifier);

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefFrame> CefBrowserCToCpp::GetFrame(const CefString& name) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: name

  // Execute
  cef_frame_t* _retval = _struct->get_frame(_struct, name.GetStruct());

  // Return type: refptr_same
  return CefFrameCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") size_t CefBrowserCToCpp::GetFrameCount() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_count))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_frame_count(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserCToCpp::GetFrameIdentifiers(std::vector<int64>& identifiers) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_identifiers))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: identifiers; type: simple_vec_byref
  size_t identifiersSize = identifiers.size();
  size_t identifiersCount = std::max(GetFrameCount(), identifiersSize);
  int64* identifiersList = NULL;
  if (identifiersCount > 0) {
    identifiersList = new int64[identifiersCount];
    DCHECK(identifiersList);
    if (identifiersList) {
      memset(identifiersList, 0, sizeof(int64) * identifiersCount);
    }
    if (identifiersList && identifiersSize > 0) {
      for (size_t i = 0; i < identifiersSize; ++i) {
        identifiersList[i] = identifiers[i];
      }
    }
  }

  // Execute
  _struct->get_frame_identifiers(_struct, &identifiersCount, identifiersList);

  // Restore param:identifiers; type: simple_vec_byref
  identifiers.clear();
  if (identifiersCount > 0 && identifiersList) {
    for (size_t i = 0; i < identifiersCount; ++i) {
      identifiers.push_back(identifiersList[i]);
    }
    delete[] identifiersList;
  }
}

NO_SANITIZE("cfi-icall")
void CefBrowserCToCpp::GetFrameNames(std::vector<CefString>& names) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_frame_names))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Translate param: names; type: string_vec_byref
  cef_string_list_t namesList = cef_string_list_alloc();
  DCHECK(namesList);
  if (namesList)
    transfer_string_list_contents(names, namesList);

  // Execute
  _struct->get_frame_names(_struct, namesList);

  // Restore param:names; type: string_vec_byref
  if (namesList) {
    names.clear();
    transfer_string_list_contents(namesList, names);
    cef_string_list_free(namesList);
  }
}

// CONSTRUCTOR - Do not edit by hand.

CefBrowserCToCpp::CefBrowserCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefBrowserCToCpp::~CefBrowserCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_browser_t*
CefCToCppRefCounted<CefBrowserCToCpp, CefBrowser, cef_browser_t>::UnwrapDerived(
    CefWrapperType type,
    CefBrowser* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefBrowserCToCpp,
                                   CefBrowser,
                                   cef_browser_t>::kWrapperType = WT_BROWSER;
