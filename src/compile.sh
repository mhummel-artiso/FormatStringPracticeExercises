#!/bin/bash
gcc -g $1.c -o $1.out -fno-stack-protector && objdump -d $1.out -l > $1.S