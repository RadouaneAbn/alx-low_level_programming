#!/bin/bash
wget -P /tmp https://github.com/RadouaneAbn/alx-low_level_programming/blob/master/0x18-dynamic_libraries/hack_jack.so
export LD_PRELOAD=/tmp/hack_jack.so
