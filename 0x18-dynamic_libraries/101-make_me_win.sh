#!/bin/bash
wget -q -O libhandle.so https://raw.githubusercontent.com/LightsNtloko/
alx-low_level_programming/master/0x18-dynamic_libraries/libhandle.so
export LD_PRELOAD="$PWD/libhandle.so"
