// Copyright (c) 2015 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.

#ifndef CEF_TESTS_SHARED_BROWSER_GEOMETRY_UTIL_H_
#define CEF_TESTS_SHARED_BROWSER_GEOMETRY_UTIL_H_
#pragma once

#include "include/internal/cef_types_wrappers.h"

namespace client {

// Convert |value| from logical coordinates to device coordinates.
int LogicalToDevice(int value, float device_scale_factor);
CefRect LogicalToDevice(const CefRect& value, float device_scale_factor);

// Convert |value| from device coordinates to logical coordinates.
int DeviceToLogical(int value, float device_scale_factor);
CefRect DeviceToLogical(const CefRect& value, float device_scale_factor);
void DeviceToLogical(CefMouseEvent& value, float device_scale_factor);
void DeviceToLogical(CefTouchEvent& value, float device_scale_factor);

// Fit |window| inside |display|. Coordinates are relative to the upper-left
// corner of the display.
void ConstrainWindowBounds(const CefRect& display, CefRect& window);

}  // namespace client

#endif  // CEF_TESTS_SHARED_BROWSER_GEOMETRY_UTIL_H_
