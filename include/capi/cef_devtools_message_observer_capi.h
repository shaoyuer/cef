// Copyright (c) 2021 Marshall A. Greenblatt. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//    * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//    * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//    * Neither the name of Google Inc. nor the name Chromium Embedded
// Framework nor the names of its contributors may be used to endorse
// or promote products derived from this software without specific prior
// written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool and should not edited
// by hand. See the translator.README.txt file in the tools directory for
// more information.
//
// $hash=1a256c04042ebd4867f39e1c31def558871b2bab$
//

#ifndef CEF_INCLUDE_CAPI_CEF_DEVTOOLS_MESSAGE_OBSERVER_CAPI_H_
#define CEF_INCLUDE_CAPI_CEF_DEVTOOLS_MESSAGE_OBSERVER_CAPI_H_
#pragma once

#include "include/capi/cef_base_capi.h"

#ifdef __cplusplus
extern "C" {
#endif

struct _cef_browser_t;

///
// Callback structure for cef_browser_host_t::AddDevToolsMessageObserver. The
// functions of this structure will be called on the browser process UI thread.
///
typedef struct _cef_dev_tools_message_observer_t {
  ///
  // Base structure.
  ///
  cef_base_ref_counted_t base;

  ///
  // Method that will be called on receipt of a DevTools protocol message.
  // |browser| is the originating browser instance. |message| is a UTF8-encoded
  // JSON dictionary representing either a function result or an event.
  // |message| is only valid for the scope of this callback and should be copied
  // if necessary. Return true (1) if the message was handled or false (0) if
  // the message should be further processed and passed to the
  // OnDevToolsMethodResult or OnDevToolsEvent functions as appropriate.
  //
  // Method result dictionaries include an "id" (int) value that identifies the
  // orginating function call sent from cef_browser_host_t::SendDevToolsMessage,
  // and optionally either a "result" (dictionary) or "error" (dictionary)
  // value. The "error" dictionary will contain "code" (int) and "message"
  // (string) values. Event dictionaries include a "function" (string) value and
  // optionally a "params" (dictionary) value. See the DevTools protocol
  // documentation at https://chromedevtools.github.io/devtools-protocol/ for
  // details of supported function calls and the expected "result" or "params"
  // dictionary contents. JSON dictionaries can be parsed using the CefParseJSON
  // function if desired, however be aware of performance considerations when
  // parsing large messages (some of which may exceed 1MB in size).
  ///
  int(CEF_CALLBACK* on_dev_tools_message)(
      struct _cef_dev_tools_message_observer_t* self,
      struct _cef_browser_t* browser,
      const void* message,
      size_t message_size);

  ///
  // Method that will be called after attempted execution of a DevTools protocol
  // function. |browser| is the originating browser instance. |message_id| is
  // the "id" value that identifies the originating function call message. If
  // the function succeeded |success| will be true (1) and |result| will be the
  // UTF8-encoded JSON "result" dictionary value (which may be NULL). If the
  // function failed |success| will be false (0) and |result| will be the
  // UTF8-encoded JSON "error" dictionary value. |result| is only valid for the
  // scope of this callback and should be copied if necessary. See the
  // OnDevToolsMessage documentation for additional details on |result|
  // contents.
  ///
  void(CEF_CALLBACK* on_dev_tools_method_result)(
      struct _cef_dev_tools_message_observer_t* self,
      struct _cef_browser_t* browser,
      int message_id,
      int success,
      const void* result,
      size_t result_size);

  ///
  // Method that will be called on receipt of a DevTools protocol event.
  // |browser| is the originating browser instance. |function| is the "function"
  // value. |params| is the UTF8-encoded JSON "params" dictionary value (which
  // may be NULL). |params| is only valid for the scope of this callback and
  // should be copied if necessary. See the OnDevToolsMessage documentation for
  // additional details on |params| contents.
  ///
  void(CEF_CALLBACK* on_dev_tools_event)(
      struct _cef_dev_tools_message_observer_t* self,
      struct _cef_browser_t* browser,
      const cef_string_t* method,
      const void* params,
      size_t params_size);

  ///
  // Method that will be called when the DevTools agent has attached. |browser|
  // is the originating browser instance. This will generally occur in response
  // to the first message sent while the agent is detached.
  ///
  void(CEF_CALLBACK* on_dev_tools_agent_attached)(
      struct _cef_dev_tools_message_observer_t* self,
      struct _cef_browser_t* browser);

  ///
  // Method that will be called when the DevTools agent has detached. |browser|
  // is the originating browser instance. Any function results that were pending
  // before the agent became detached will not be delivered, and any active
  // event subscriptions will be canceled.
  ///
  void(CEF_CALLBACK* on_dev_tools_agent_detached)(
      struct _cef_dev_tools_message_observer_t* self,
      struct _cef_browser_t* browser);
} cef_dev_tools_message_observer_t;

#ifdef __cplusplus
}
#endif

#endif  // CEF_INCLUDE_CAPI_CEF_DEVTOOLS_MESSAGE_OBSERVER_CAPI_H_
