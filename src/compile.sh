#!/bin/bash
echo "write $1.c to:"
echo "  exe: $1.out"
echo "  objdump: $1.S"
echo ""
gcc -g $1.c -o $1.out && objdump -d $1.out -l > $1.S