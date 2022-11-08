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

# Convoluted way to avoid secrets in git
source secrets.env
keymap_path="keyboards/${kb}/keymaps/${km}/keymap.c"
backup_path="${keymap_path}.backup"
cp "${keymap_path}" "${backup_path}"
sed -i "s/{{PWD_0}}/${PWD_0}/" ${keymap_path}
sed -i "s/{{PWD_1}}/${PWD_1}/" ${keymap_path}

# Compilation step
qmk compile -kb ${kb} -km ${km} "${@}"

# Make newest hex file "latest" copy
mkdir -p hex_files
mv "${default_name}.hex" "hex_files/${new_name}"
latest=$(ls -t hex_files/ | head -n1)
cp "hex_files/${latest}" "./miryoku_plus_latest.hex"

# Reset the keymap file to remove secrets
cp "${backup_path}" "${keymap_path}"
# Double check the env vars are not left in by accident
sed -i "s/${PWD_0}//" ${keymap_path}
sed -i "s/${PWD_1}//" ${keymap_path}
