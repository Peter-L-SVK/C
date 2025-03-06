#!/usr/bin/env bash

gcc -c guess2.c funct.c
read -p "zadaj nazov programu: " meno
gcc -o $meno guess2.o funct.o
rm -f guess2.o funct2.o
echo "Hotovo."

exit 0
