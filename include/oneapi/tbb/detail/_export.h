/*
    Copyright (c) 2005-2021 Intel Corporation

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef __TBB_detail__export_H
#define __TBB_detail__export_H

#if (__TBB_BUILD || __TBBMALLOC_BUILD || __TBBMALLOCPROXY_BUILD || __TBBBIND_BUILD)
    #if _WIN32
        #define TBB_EXPORT __declspec(dllexport)
    #elif __unix__
        #define TBB_EXPORT __attribute__((visibility("default")))
    #else
        #error "Unknown platform/compiler"
    #endif
#else
    #define TBB_EXPORT
#endif

#endif