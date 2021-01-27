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
// $hash=a5ace913fb83fef08e7678ce2b9fdaedae5cde1d$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_zip_reader_capi.h"
#include "include/cef_zip_reader.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefZipReaderCppToC : public CefCppToCRefCounted<CefZipReaderCppToC,
                                                      CefZipReader,
                                                      cef_zip_reader_t> {
 public:
  CefZipReaderCppToC();
  virtual ~CefZipReaderCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_ZIP_READER_CPPTOC_H_
