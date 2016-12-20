/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <android/hardware/wifi/1.0/IWifi.h>
#include <android/hardware/wifi/1.0/IWifiApIface.h>
#include <android/hardware/wifi/1.0/IWifiChip.h>
#include <android/hardware/wifi/1.0/IWifiNanIface.h>
#include <android/hardware/wifi/1.0/IWifiP2pIface.h>
#include <android/hardware/wifi/1.0/IWifiRttController.h>
#include <android/hardware/wifi/1.0/IWifiStaIface.h>

// Used to stop the android framework (wifi service) before every
// test.
void stopFramework();
void startFramework();

// Helper functions to obtain references to the various HIDL interface objects.
// Note: We only have a single instance of each of these objects currently.
// These helper functions should be modified to return vectors if we support
// multiple instances.
android::sp<android::hardware::wifi::V1_0::IWifi> getWifi();
android::sp<android::hardware::wifi::V1_0::IWifiChip> getWifiChip();
android::sp<android::hardware::wifi::V1_0::IWifiApIface> getWifiApIface();
android::sp<android::hardware::wifi::V1_0::IWifiNanIface> getWifiNanIface();
android::sp<android::hardware::wifi::V1_0::IWifiP2pIface> getWifiP2pIface();
android::sp<android::hardware::wifi::V1_0::IWifiStaIface> getWifiStaIface();
android::sp<android::hardware::wifi::V1_0::IWifiRttController>
getWifiRttController();
// Used to trigger IWifi.stop() at the end of every test.
void stopWifi();
