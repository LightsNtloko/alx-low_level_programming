#!/bin/bash
wget -P https://raw.githubusercontent.com/LightsNtloko/alx-low_level_programming/master/0x18-dynamic_libraries.so
export LD_PRELOAD="$PWD/../libhandle.so"
