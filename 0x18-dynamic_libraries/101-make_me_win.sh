#!/bin/bash
wget -P .. https://raw.githubusercontent.com/gokruzz/alx-low_level_programming/master/0x18-dynamic_libraries/libwins.so
export LD_PRELOAD="$PWD/../libwins.so"
