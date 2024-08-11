#!/usr/bin/bash

gcc $1 $2
./a.out
rm -rf ./a.out
