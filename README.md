# QMK Userspace

# Overview

My user-space sets up a common keymap for use with most of the boards I own. This configuration is heavily influenced by @filterpaper (https://github.com/filterpaper/qmk_userspace). Keymaps are defined in json files, avoiding individual keymap.c for each board.

My usercode utilizes the layout wrappers contained in [wrappers.h](wrappers.h). All of these keymaps are derivative of a base 34-key map with 5 layers. 
