# little-os
A simple os following the little book about OS development

## Environments

We need

- `nasm` to compile assembly code.
- `gcc` to compile C code.
- GNU `ld` to link the code and generate the kernel.
- `genisoimage` or alternative to make a `os.iso` with `grub`
- `bochs` to run the `os.iso`

I use virtual ubuntu to compile the code

```
sudo apt-get install build-essential nasm genisoimage
```

and since `bochs` has a GUI, I use OS X to run. It is a shame that `brew install bochs` fails currently, so we need to compile it manually. See also https://github.com/Homebrew/homebrew-x11/issues/263

## Build

To compile the c and assembly code,

```
make
```

To generate `os.iso` from `/iso`

```
make os.iso
```

To run the os,

```
make run
```

## Results

- [x] display a character
- [x] display a cursor
- [ ] implement printf to the screen
- [ ] further objectives

## Reference

- [The little book about OS development](https://littleosbook.github.io/)
- [LukeXuan/osdev](https://github.com/LukeXuan/osdev)
- [dbshch/OS](https://github.com/dbshch/OS)
