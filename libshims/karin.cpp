/*
 * Copyright (C) 2016 The CyanogenMod Project
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

/* IDA VIEW:
; _DWORD android::AudioSystem::getVoiceUnlockDLInstance(android::AudioSystem *__hidden this)
_ZN7android11AudioSystem24getVoiceUnlockDLInstanceEv
ADRL            R12, 0x490F8
LDR             PC, [R12,#(_ZN7android11AudioSystem24getVoiceUnlockDLInstanceEv_ptr - 0x490F8)]! ; android::AudioSystem::getVoiceUnlockDLInstance(void)
; End of function android::AudioSystem::getVoiceUnlockDLInstance(void) */

/* Audio shim */
extern "C" {
    void _ZN7android11AudioSystem24getVoiceUnlockDLInstanceEv() {}
}

/* Media shim */
extern "C" {
    void _ZN7android13MediaRecorder18setParametersExtraERKNS_7String8E() {}
    void _ZN7android9MtpServer17sendObjectUpdatedEj() {}
}
