# meta-smarco

Smart Core OpenEmbedded/Yocto BSP Layer.

## Description

This is the general hardware-specific BSP layer for Smart Core boards.
More information can be found at https://www.smart-core.cn web site.

## Dependencies

This layer depends on:
 - https://github.com/openembedded/bitbake
 - https://github.com/openembedded/openembedded-core
 - https://github.com/openembedded/meta-openembedded
 - https://github.com/riscv/meta-riscv

## Available machines

This layer provides a BSP for the following machines:
 - duowen: The Smart Core RISC-V server board
 - RES: The Smart Core RISC-V edge server board

But changes are also validated on Qemu RISC-V 64-bits, so this layer also
supports the following machine:
 - qemuriscv64: Qemu RISC-V 64-bits emulator

## Available distributions

This layer doesn't define new distributions. BSPs are validated with the
`core-image-minimal` and the `core-image-sato` provided by `OE-core` layer.

## Quick start

Use [smarco-sdk](https://github.com/smarco-mc/smarco-sdk) as the build environment and find documentation there.

## Contributions & Feedback

If you want to file issues, send patches and make feature/enhancement
requests, use [meta-smarco](https://github.com/smarco-mc/meta-smarco) repository on GitHub.
