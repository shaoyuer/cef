// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITIONS IN
//   chrome\common\extensions\api
// DO NOT EDIT.

#ifndef CEF_LIBCEF_COMMON_EXTENSIONS_CHROME_GENERATED_SCHEMAS_H_
#define CEF_LIBCEF_COMMON_EXTENSIONS_CHROME_GENERATED_SCHEMAS_H_

#include <map>
#include <string>
#include <string_view>

namespace extensions::api::cef {

class ChromeGeneratedSchemas {
 public:
  // Determines if schema named |name| is generated.
  static bool IsGenerated(std::string name);

  // Gets the API schema named |name|.
  static std::string_view Get(const std::string& name);
};

}  // namespace extensions::api::cef

#endif  // CEF_LIBCEF_COMMON_EXTENSIONS_CHROME_GENERATED_SCHEMAS_H_
