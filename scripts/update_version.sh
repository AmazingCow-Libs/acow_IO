#!/bin/bash
##~---------------------------------------------------------------------------##
##                     _______  _______  _______  _     _                     ##
##                    |   _   ||       ||       || | _ | |                    ##
##                    |  |_|  ||       ||   _   || || || |                    ##
##                    |       ||       ||  | |  ||       |                    ##
##                    |       ||      _||  |_|  ||       |                    ##
##                    |   _   ||     |_ |       ||   _   |                    ##
##                    |__| |__||_______||_______||__| |__|                    ##
##                             www.amazingcow.com                             ##
##  File      : update_version.sh                                             ##
##  Project   : CoreFS                                                        ##
##  Date      : Dec 05, 2017                                                  ##
##  License   : GPLv3                                                         ##
##  Author    : n2omatt <n2omatt@amazingcow.com>                              ##
##  Copyright : AmazingCow - 2017                                             ##
##                                                                            ##
##  Description :                                                             ##
##                                                                            ##
##---------------------------------------------------------------------------~##

##----------------------------------------------------------------------------##
## Constants                                                                  ##
##----------------------------------------------------------------------------##
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)";


##----------------------------------------------------------------------------##
## Vars                                                                       ##
##----------------------------------------------------------------------------##
PROJECT_NAME="COREFS"
HEADER_FILE="$SCRIPT_DIR/../CoreFS/include/CoreFS_Utils.h";
DOXY_FILE="$SCRIPT_DIR/../docs/Doxyfile";
VERSION="$1";


##----------------------------------------------------------------------------##
## Script                                                                     ##
##----------------------------------------------------------------------------##
## update_version github:
##   https://github.com/AmazingCow-Tools/update_version
update_version  \
  $PROJECT_NAME \
  $VERSION      \
  $HEADER_FILE  \
  $DOXY_FILE

