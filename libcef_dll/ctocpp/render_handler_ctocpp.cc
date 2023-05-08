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
// $hash=0720ce9a5427a1a1a161898e059b84cfbbbecbfb$
//

#include "libcef_dll/ctocpp/render_handler_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/drag_data_cpptoc.h"
#include "libcef_dll/ctocpp/accessibility_handler_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
CefRefPtr<CefAccessibilityHandler>
CefRenderHandlerCToCpp::GetAccessibilityHandler() {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_accessibility_handler)) {
    return nullptr;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_accessibility_handler_t* _retval =
      _struct->get_accessibility_handler(_struct);

  // Return type: refptr_same
  return CefAccessibilityHandlerCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
bool CefRenderHandlerCToCpp::GetRootScreenRect(CefRefPtr<CefBrowser> browser,
                                               CefRect& rect) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_root_screen_rect)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->get_root_screen_rect(
      _struct, CefBrowserCppToC::Wrap(browser), &rect);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::GetViewRect(CefRefPtr<CefBrowser> browser,
                                         CefRect& rect) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_view_rect)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->get_view_rect(_struct, CefBrowserCppToC::Wrap(browser), &rect);
}

NO_SANITIZE("cfi-icall")
bool CefRenderHandlerCToCpp::GetScreenPoint(CefRefPtr<CefBrowser> browser,
                                            int viewX,
                                            int viewY,
                                            int& screenX,
                                            int& screenY) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_screen_point)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }

  // Execute
  int _retval =
      _struct->get_screen_point(_struct, CefBrowserCppToC::Wrap(browser), viewX,
                                viewY, &screenX, &screenY);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefRenderHandlerCToCpp::GetScreenInfo(CefRefPtr<CefBrowser> browser,
                                           CefScreenInfo& screen_info) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_screen_info)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->get_screen_info(
      _struct, CefBrowserCppToC::Wrap(browser), &screen_info);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnPopupShow(CefRefPtr<CefBrowser> browser,
                                         bool show) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_popup_show)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_popup_show(_struct, CefBrowserCppToC::Wrap(browser), show);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnPopupSize(CefRefPtr<CefBrowser> browser,
                                         const CefRect& rect) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_popup_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_popup_size(_struct, CefBrowserCppToC::Wrap(browser), &rect);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnPaint(CefRefPtr<CefBrowser> browser,
                                     PaintElementType type,
                                     const RectList& dirtyRects,
                                     const void* buffer,
                                     int width,
                                     int height) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_paint)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: buffer; type: simple_byaddr
  DCHECK(buffer);
  if (!buffer) {
    return;
  }

  // Translate param: dirtyRects; type: simple_vec_byref_const
  const size_t dirtyRectsCount = dirtyRects.size();
  cef_rect_t* dirtyRectsList = NULL;
  if (dirtyRectsCount > 0) {
    dirtyRectsList = new cef_rect_t[dirtyRectsCount];
    DCHECK(dirtyRectsList);
    if (dirtyRectsList) {
      for (size_t i = 0; i < dirtyRectsCount; ++i) {
        dirtyRectsList[i] = dirtyRects[i];
      }
    }
  }

  // Execute
  _struct->on_paint(_struct, CefBrowserCppToC::Wrap(browser), type,
                    dirtyRectsCount, dirtyRectsList, buffer, width, height);

  // Restore param:dirtyRects; type: simple_vec_byref_const
  if (dirtyRectsList) {
    delete[] dirtyRectsList;
  }
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnAcceleratedPaint(CefRefPtr<CefBrowser> browser,
                                                PaintElementType type,
                                                const RectList& dirtyRects,
                                                void* shared_handle) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_accelerated_paint)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Verify param: shared_handle; type: simple_byaddr
  DCHECK(shared_handle);
  if (!shared_handle) {
    return;
  }

  // Translate param: dirtyRects; type: simple_vec_byref_const
  const size_t dirtyRectsCount = dirtyRects.size();
  cef_rect_t* dirtyRectsList = NULL;
  if (dirtyRectsCount > 0) {
    dirtyRectsList = new cef_rect_t[dirtyRectsCount];
    DCHECK(dirtyRectsList);
    if (dirtyRectsList) {
      for (size_t i = 0; i < dirtyRectsCount; ++i) {
        dirtyRectsList[i] = dirtyRects[i];
      }
    }
  }

  // Execute
  _struct->on_accelerated_paint(_struct, CefBrowserCppToC::Wrap(browser), type,
                                dirtyRectsCount, dirtyRectsList, shared_handle);

  // Restore param:dirtyRects; type: simple_vec_byref_const
  if (dirtyRectsList) {
    delete[] dirtyRectsList;
  }
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::GetTouchHandleSize(
    CefRefPtr<CefBrowser> browser,
    cef_horizontal_alignment_t orientation,
    CefSize& size) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_touch_handle_size)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->get_touch_handle_size(_struct, CefBrowserCppToC::Wrap(browser),
                                 orientation, &size);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnTouchHandleStateChanged(
    CefRefPtr<CefBrowser> browser,
    const CefTouchHandleState& state) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_touch_handle_state_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_touch_handle_state_changed(
      _struct, CefBrowserCppToC::Wrap(browser), &state);
}

NO_SANITIZE("cfi-icall")
bool CefRenderHandlerCToCpp::StartDragging(CefRefPtr<CefBrowser> browser,
                                           CefRefPtr<CefDragData> drag_data,
                                           DragOperationsMask allowed_ops,
                                           int x,
                                           int y) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, start_dragging)) {
    return false;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return false;
  }
  // Verify param: drag_data; type: refptr_diff
  DCHECK(drag_data.get());
  if (!drag_data.get()) {
    return false;
  }

  // Execute
  int _retval = _struct->start_dragging(
      _struct, CefBrowserCppToC::Wrap(browser),
      CefDragDataCppToC::Wrap(drag_data), allowed_ops, x, y);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::UpdateDragCursor(CefRefPtr<CefBrowser> browser,
                                              DragOperation operation) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, update_drag_cursor)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->update_drag_cursor(_struct, CefBrowserCppToC::Wrap(browser),
                              operation);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnScrollOffsetChanged(
    CefRefPtr<CefBrowser> browser,
    double x,
    double y) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_scroll_offset_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_scroll_offset_changed(_struct, CefBrowserCppToC::Wrap(browser), x,
                                    y);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnImeCompositionRangeChanged(
    CefRefPtr<CefBrowser> browser,
    const CefRange& selected_range,
    const RectList& character_bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_ime_composition_range_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Translate param: character_bounds; type: simple_vec_byref_const
  const size_t character_boundsCount = character_bounds.size();
  cef_rect_t* character_boundsList = NULL;
  if (character_boundsCount > 0) {
    character_boundsList = new cef_rect_t[character_boundsCount];
    DCHECK(character_boundsList);
    if (character_boundsList) {
      for (size_t i = 0; i < character_boundsCount; ++i) {
        character_boundsList[i] = character_bounds[i];
      }
    }
  }

  // Execute
  _struct->on_ime_composition_range_changed(
      _struct, CefBrowserCppToC::Wrap(browser), &selected_range,
      character_boundsCount, character_boundsList);

  // Restore param:character_bounds; type: simple_vec_byref_const
  if (character_boundsList) {
    delete[] character_boundsList;
  }
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnTextSelectionChanged(
    CefRefPtr<CefBrowser> browser,
    const CefString& selected_text,
    const CefRange& selected_range) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_text_selection_changed)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }
  // Unverified params: selected_text, selected_range

  // Execute
  _struct->on_text_selection_changed(_struct, CefBrowserCppToC::Wrap(browser),
                                     selected_text.GetStruct(),
                                     &selected_range);
}

NO_SANITIZE("cfi-icall")
void CefRenderHandlerCToCpp::OnVirtualKeyboardRequested(
    CefRefPtr<CefBrowser> browser,
    TextInputMode input_mode) {
  shutdown_checker::AssertNotShutdown();

  cef_render_handler_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_virtual_keyboard_requested)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get()) {
    return;
  }

  // Execute
  _struct->on_virtual_keyboard_requested(
      _struct, CefBrowserCppToC::Wrap(browser), input_mode);
}

// CONSTRUCTOR - Do not edit by hand.

CefRenderHandlerCToCpp::CefRenderHandlerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefRenderHandlerCToCpp::~CefRenderHandlerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_render_handler_t*
CefCToCppRefCounted<CefRenderHandlerCToCpp,
                    CefRenderHandler,
                    cef_render_handler_t>::UnwrapDerived(CefWrapperType type,
                                                         CefRenderHandler* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefRenderHandlerCToCpp,
                                   CefRenderHandler,
                                   cef_render_handler_t>::kWrapperType =
    WT_RENDER_HANDLER;
