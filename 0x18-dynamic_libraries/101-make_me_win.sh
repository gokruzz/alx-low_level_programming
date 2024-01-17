#!/bin/bash
wget -P /tmp https://github.com/gokruzz/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libwins.so
export LD_PRELOAD=/tmp/libwins.so
