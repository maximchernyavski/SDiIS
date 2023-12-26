#!/bin/bash
git clone https://github.com/google/googletest
cd googletest
mkdir build
cd build
cmake ..
cd ../../
cmake -S . -B build
cmake --build build