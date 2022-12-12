#!/bin/bash
wget -O /tmp/win.so https://github.com/dennisappiahALX/alx-low_level_programming/raw/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
