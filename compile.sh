#!/usr/bin/bash

gcc $1 $2 $3 $4 $5
./a.out
rm -rf ./a.out
