//~---------------------------------------------------------------------------//
//                     _______  _______  _______  _     _                     //
//                    |   _   ||       ||       || | _ | |                    //
//                    |  |_|  ||       ||   _   || || || |                    //
//                    |       ||       ||  | |  ||       |                    //
//                    |       ||      _||  |_|  ||       |                    //
//                    |   _   ||     |_ |       ||   _   |                    //
//                    |__| |__||_______||_______||__| |__|                    //
//                             www.amazingcow.com                             //
//  File      : Macros.h                                                      //
//  Project   : CoreFS                                                        //
//  Date      : Aug 05, 2017                                                  //
//  License   : GPLv3                                                         //
//  Author    : n2omatt <n2omatt@amazingcow.com>                              //
//  Copyright : AmazingCow - 2017                                             //
//                                                                            //
//  Description :                                                             //
//    Macros used by CoreFS.                                                  //
//---------------------------------------------------------------------------~//

#pragma once

#define SAFE_FREE(_ptr_) do {   \
    if((_ptr_) != nullptr) {    \
        free((_ptr_));          \
        (_ptr_) = nullptr;      \
    }                           \
} while(0);
