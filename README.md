# GameBoy Examples

This repository contains example programs for the Nintendo GameBoy video game console. The examples are related to articles on my blog (in French).


## Examples Index

| Screenshot                                              | Name                                                       | Description                                                                   |
|---------------------------------------------------------|------------------------------------------------------------|-------------------------------------------------------------------------------|
| ![](./01-hello-world/hello_screenshot.png)              | [01 - Hello World](./01-hello-world/)                      | Simple program that prints "Hello World" on the screen.                       |
| ![](./02-gamepad/gamepad_screenshot.gif)                | [02 - Gamepad](./02-gamepad/)                              | Simple program shows how to use gamepad in a GameBoy program.                 |
| ![](./03-tic-tac-toe/tictactoe_screenshot.gif)          | [03 - Tic Tac Toe](./03-tic-tac-toe/)                      | A complete example project to show how to make a simple game for the GameBoy. |
| ![](./04-graphics1/graphics1_screenshot.png)            | [04 - Graphics 1](./04-graphics1/)                         | Simple example to show how to draw tiles on the GameBoy                       |
| ![](./05-graphics2/graphics2_screenshot.png)            | [05 - Graphics 2](./05-graphics2/)                         | Converts an image using img2gb and display it                                 |
| ![](./06-graphics3-background/graphics3_screenshot.gif) | [06 - Graphics 3 - background](./06-graphics3-background/) | Background layer scrolling example                                            |
| ![](./07-graphics4-sprites/graphics4_screenshot.gif)    | [07 - Graphics 4 - sprites](./07-graphics4-sprites/)       | A complete sprite example with an animated player                             |
| ![](./08-graphics5-window/graphics5_screenshot.gif)     | [08 - Gtaphics 5 - window](./08-graphics5-window/)         | Window layer example                                                          |
| ![](./09-graphics6-palette/graphics6_screenshot.gif)    | [09 - Gtaphics 6 - palettes](./09-graphics6-palette/)      | Playing with color palettes                                                   |


## Compiling Examples

### Linux

First you need to install some dependencies: SDCC (with its libraries), GNU Make, git. This can be installed with the following command on Debian / Ubuntu:

    sudo apt install build-essential sdcc sdcc-libraries git

Then clone this repository and get submodules:

    git clone https://github.com/flozz/gameboy-examples.git
    cd gameboy-examples
    git submodule init
    git submodule update

Then you have to build the gbdk-n library (this needs to be done only once):

    cd gbdk-n
    make
    cd ..

Finally, you can build examples with the `make` command for the directory of the example. For example, if you want to build the "Hello World" example, you will have to run the following commands:

    cd 01-hello-world/
    make

You can now run the generated `.gb` file with your favorite emulator.


### Windows

TODO


## Building assets

Some of the examples have assets (tilesets, tilemaps, sprites,...). If you changes the images, you will have to rebuild assets with the following command (from the example directory):

    make assets

Note that you will need to install [img2gb][] to generate the assets.

[img2gb]: https://github.com/flozz/img2gb


## License

The examples in this repository are licensed under WTFPL unless otherwise stated:

```
        DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
```
