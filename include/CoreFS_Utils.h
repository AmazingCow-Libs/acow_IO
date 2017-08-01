//COWTODO: Add license headers.
#pragma once

//All classes of this core is placed inside this namespace.
//We use MACROS so is easier to change if needed.
//Is (in our opinion) more explicit.
//And finally the editors will not reformat the code.
#define NS_COREFS_BEGIN namespace CoreFS {
#define NS_COREFS_END   }
#define USING_NS_COREFS using namespace CoreFS

//The core version number.
#define COW_COREFS_VERSION_MAJOR    "0"
#define COW_COREFS_VERSION_MINOR    "0"
#define COW_COREFS_VERSION_REVISION "0"

#define COW_COREFS_VERSION       \
    COW_COREFS_VERSION_MAJOR "." \
    COW_COREFS_VERSION_MINOR "." \
    COW_COREFS_VERSION_REVISION
