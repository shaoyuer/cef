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
// $hash=a0b2ffd53a9d1c0054348f323cfdd548cdbeca86$
//

#include "libcef_dll/ctocpp/views/browser_view_ctocpp.h"
#include "libcef_dll/cpptoc/client_cpptoc.h"
#include "libcef_dll/cpptoc/views/browser_view_delegate_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_delegate_cpptoc.h"
#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/dictionary_value_ctocpp.h"
#include "libcef_dll/ctocpp/request_context_ctocpp.h"
#include "libcef_dll/ctocpp/views/button_ctocpp.h"
#include "libcef_dll/ctocpp/views/panel_ctocpp.h"
#include "libcef_dll/ctocpp/views/scroll_view_ctocpp.h"
#include "libcef_dll/ctocpp/views/textfield_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/ctocpp/views/window_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// STATIC METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefBrowserView::CreateBrowserView(
    CefRefPtr<CefClient> client,
    const CefString& url,
    const CefBrowserSettings& settings,
    CefRefPtr<CefDictionaryValue> extra_info,
    CefRefPtr<CefRequestContext> request_context,
    CefRefPtr<CefBrowserViewDelegate> delegate) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: client, url, extra_info, request_context, delegate

  // Execute
  cef_browser_view_t* _retval = cef_browser_view_create(
      CefClientCppToC::Wrap(client), url.GetStruct(), &settings,
      CefDictionaryValueCToCpp::Unwrap(extra_info),
      CefRequestContextCToCpp::Unwrap(request_context),
      CefBrowserViewDelegateCppToC::Wrap(delegate));

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefBrowserView::GetForBrowser(
    CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_same
  DCHECK(browser.get());
  if (!browser.get()) {
    return nullptr;
  }

  // Execute
  cef_browser_view_t* _retval =
      cef_browser_view_get_for_browser(CefBrowserCToCpp::Unwrap(browser));

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowser> CefBrowserViewCToCpp::GetBrowser() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_browser)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_t* _retval = _struct->get_browser(_struct);

  // Return type: refptr_same
  return CefBrowserCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefBrowserViewCToCpp::GetChromeToolbar() {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_chrome_toolbar)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_chrome_toolbar(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetPreferAccelerators(bool prefer_accelerators) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_prefer_accelerators)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_prefer_accelerators(_struct, prefer_accelerators);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserView> CefBrowserViewCToCpp::AsBrowserView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_browser_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_view_t* _retval = _struct->as_browser_view(_struct);

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefButton> CefBrowserViewCToCpp::AsButton() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_button)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_t* _retval = _struct->as_button(_struct);

  // Return type: refptr_same
  return CefButtonCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefRefPtr<CefPanel> CefBrowserViewCToCpp::AsPanel() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_panel)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_panel_t* _retval = _struct->as_panel(_struct);

  // Return type: refptr_same
  return CefPanelCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefScrollView> CefBrowserViewCToCpp::AsScrollView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_scroll_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_scroll_view_t* _retval = _struct->as_scroll_view(_struct);

  // Return type: refptr_same
  return CefScrollViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefTextfield> CefBrowserViewCToCpp::AsTextfield() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_textfield)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_textfield_t* _retval = _struct->as_textfield(_struct);

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") CefString CefBrowserViewCToCpp::GetTypeString() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_type_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_type_string(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall")
CefString CefBrowserViewCToCpp::ToString(bool include_children) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, to_string)) {
    return CefString();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->to_string(_struct, include_children);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsAttached() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_attached)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_attached(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::IsSame(CefRefPtr<CefView> that) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_same)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->is_same(_struct, CefViewCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefViewDelegate> CefBrowserViewCToCpp::GetDelegate() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_delegate)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_delegate_t* _retval = _struct->get_delegate(_struct);

  // Return type: refptr_diff
  return CefViewDelegateCppToC::Unwrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefWindow> CefBrowserViewCToCpp::GetWindow() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_window)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall") int CefBrowserViewCToCpp::GetID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::SetID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_id(_struct, id);
}

NO_SANITIZE("cfi-icall") int CefBrowserViewCToCpp::GetGroupID() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_group_id)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_group_id(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::SetGroupID(int group_id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_group_id)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_group_id(_struct, group_id);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefBrowserViewCToCpp::GetParentView() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_parent_view)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_parent_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefBrowserViewCToCpp::GetViewForID(int id) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_view_for_id)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_view_for_id(_struct, id);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetBounds(const CefRect& bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_bounds)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct, &bounds);
}

NO_SANITIZE("cfi-icall") CefRect CefBrowserViewCToCpp::GetBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefRect CefBrowserViewCToCpp::GetBoundsInScreen() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen)) {
    return CefRect();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetSize(const CefSize& size) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct, &size);
}

NO_SANITIZE("cfi-icall") CefSize CefBrowserViewCToCpp::GetSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetPosition(const CefPoint& position) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_position)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct, &position);
}

NO_SANITIZE("cfi-icall") CefPoint CefBrowserViewCToCpp::GetPosition() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_position)) {
    return CefPoint();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetInsets(const CefInsets& insets) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_insets)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_insets(_struct, &insets);
}

NO_SANITIZE("cfi-icall") CefInsets CefBrowserViewCToCpp::GetInsets() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_insets)) {
    return CefInsets();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_insets_t _retval = _struct->get_insets(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefBrowserViewCToCpp::GetPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_preferred_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::SizeToPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

NO_SANITIZE("cfi-icall") CefSize CefBrowserViewCToCpp::GetMinimumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_minimum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") CefSize CefBrowserViewCToCpp::GetMaximumSize() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size)) {
    return CefSize();
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_maximum_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefBrowserViewCToCpp::GetHeightForWidth(int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_height_for_width(_struct, width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::InvalidateLayout() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, invalidate_layout)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate_layout(_struct);
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::SetVisible(bool visible) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_visible)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct, visible);
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsVisible() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_visible)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsDrawn() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_drawn)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::SetEnabled(bool enabled) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_enabled)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled(_struct, enabled);
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsEnabled() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_enabled)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_enabled(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetFocusable(bool focusable) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_focusable)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focusable(_struct, focusable);
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefBrowserViewCToCpp::IsAccessibilityFocusable() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_accessibility_focusable)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_accessibility_focusable(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") void CefBrowserViewCToCpp::RequestFocus() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, request_focus)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->request_focus(_struct);
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewCToCpp::SetBackgroundColor(cef_color_t color) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_background_color)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_background_color(_struct, color);
}

NO_SANITIZE("cfi-icall")
cef_color_t CefBrowserViewCToCpp::GetBackgroundColor() {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_background_color)) {
    return 0;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_background_color(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointToScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointFromScreen(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_screen)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_screen(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointToWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointFromWindow(CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_window)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_window(_struct, &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointToView(CefRefPtr<CefView> view,
                                              CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_to_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewCToCpp::ConvertPointFromView(CefRefPtr<CefView> view,
                                                CefPoint& point) {
  shutdown_checker::AssertNotShutdown();

  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_view)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->convert_point_from_view(
      _struct, CefViewCToCpp::Unwrap(view), &point);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefBrowserViewCToCpp::CefBrowserViewCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefBrowserViewCToCpp::~CefBrowserViewCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_browser_view_t*
CefCToCppRefCounted<CefBrowserViewCToCpp, CefBrowserView, cef_browser_view_t>::
    UnwrapDerived(CefWrapperType type, CefBrowserView* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefBrowserViewCToCpp,
                                   CefBrowserView,
                                   cef_browser_view_t>::kWrapperType =
    WT_BROWSER_VIEW;
