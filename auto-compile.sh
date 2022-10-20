#!/bin/bash
base=rev1
kb=lily58
km=miryoku_plus

time=$(date '+%y-%m-%d-%H%M')
default_name="${kb}_${base}_${km}"
new_name="${kb}_${km}_${time}.hex"
echo $default_name
echo $new_name
echo $time
qmk compile -kb ${kb} -km ${km} "${@}"
mkdir -p hex_files
mv "${default_name}.hex" "hex_files/${new_name}"
latest=$(ls -t hex_files/ | head -n1)
cp "hex_files/${latest}" "./miryoku_plus_latest.hex"
