#!/bin/sh
echo -e "\nbuilding srbfetch.."
sh vars.sh
clang srbfetch.c -o srbfetch
cp srbfetch /usr/local/mph/bin/srbfetch
