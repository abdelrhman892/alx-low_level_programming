#!/bin/bash
wget -P /tmp https:/abdelrhman892/github.com/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
