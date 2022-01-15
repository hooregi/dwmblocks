# Dynamic Window Manager's **Blocks**

`dwmblocks` is a modular status bar for `dwm`. The status bar is made from text output from shell scripts.

## Upstream

The upstream development of `dwmblocks` can be found [here](https://github.com/torrinfail/dwmblocks).

# Blocks

- cpu
- internet
- volume
- battery
- time
- date

Most of these scripts can be found in my [dotfiles](https://gitlab.com/Hooregi/Halofiles).

# Arch Linux Install

Download the `PKGBUILD` from this repository and run the following command:

```
makepkg -cf
```

This will create a file that ends in `.pkg.tar.zst`. Then run:

```
sudo pacman -U *.pkg.tar.zst
```

# Regular Install

Download the source code from this repository:

```
git clone https://gitlab.com/Hooregi/dwmblocks.git
cd dwmblocks
sudo make clean install
```
