#!/bin/bash

# rm binary
rm -f bomberman

# rm cmake files
rm -rf CMakeFiles
rm -f CMakeCache.txt
rm -f cmake_install.cmake
rm -f Makefile

# rm logs
rm -rf logs

# clear terminal
echo -en "\033[H\033[J"
