#!/bin/bash

# rm binary
rm -f bomberman

# rm cmake files
rm -rf CMakeFiles
rm -f CMakeCache.txt
rm -f cmake_install.cmake
rm -f Makefile

# create logs directory
mkdir -p logs

# re-make
cmake .
make

# run
./bomberman
