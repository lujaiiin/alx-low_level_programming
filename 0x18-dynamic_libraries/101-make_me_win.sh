#!/bin/bash
wget -P /tmp http://github.com/lujaiiin/alx-low_level_programming/raw/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
