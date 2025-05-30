// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_VIEWS_H_
#define CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_VIEWS_H_
#pragma once

#include "tests/cefclient/browser/window_test_runner.h"

namespace client::window_test {

// Views platform implementation.
class WindowTestRunnerViews : public WindowTestRunner {
 public:
  WindowTestRunnerViews();

  void Minimize(CefRefPtr<CefBrowser> browser) override;
  void Maximize(CefRefPtr<CefBrowser> browser) override;
  void Restore(CefRefPtr<CefBrowser> browser) override;
  void Fullscreen(CefRefPtr<CefBrowser> browser) override;
  void SetTitleBarHeight(CefRefPtr<CefBrowser> browser,
                         const std::optional<float>& height) override;
};

}  // namespace client::window_test

#endif  // CEF_TESTS_CEFCLIENT_BROWSER_WINDOW_TEST_RUNNER_VIEWS_H_
