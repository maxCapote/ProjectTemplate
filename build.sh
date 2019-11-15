#!/bin/bash

if [[ $1 = "clean" ]]; then
  rm -rf build
else
  mkdir build && cd build
  cmake ..
  make
fi

exit 0
