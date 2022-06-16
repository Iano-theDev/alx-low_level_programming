#!/bin/bash
wget -O /tmp/win.so https://github.com/Reggie071993/alx-low_level_programming/blob/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
