# GameBoy Example 01: Hello World

Here is a brief resume of the GameBoy platform.

* The first GameBoy, also called DMG (for Dot Matrix Game), is a portable console released in 1989 in Japan. The GameBoy technical characteristics:
    * an 8-bit CPU (derived from Zilog Z80), clocked at 4.194304 MHz,
    * 8 KB of RAM,
    * 8 KB of video memory,
    * a 2.6" screen displaying 4 levels of gray at a resolution of 160×144 pixels,
    * stereo sound (only via headphones because the console only includes a single speaker),

* In 1995, the GameBoy Pocket was released. 30% smaller size and a better quality screen.

* In 1998 by the GameBoy Pocket Light, which is identical to the Pocket but which adds backlighting to the screen.

* In 1998, the GameBoy Color was released (abbreviated as GBC), with a color screen, as its name suggests, and boosted performance: more video memory, a CPU equipped with a double-speed mode, backwards compatible with monochrome GameBoy games, and it is even possible to develop color games that also work on older generations of consoles.

# Develop on GameBoy

Today there are several solutions for [developing](https://github.com/gbdev/awesome-gbdev) on GameBoy:

* We can write our game in assembler. The assembler allows you to control very precisely what happens on the machine, but in return requires a lot more work, because we must write our program in a language very close to that understood by the microprocessor.

* We can also write our game in C, which is a higher level language than assembly. C allows you to write a game relatively quickly, the main drawback being that our program may consume a little more resources on the machine if we are not careful. **Here I will discuss programming on GameBoy in C**.

* And finally, you can create a game without writing a single line of code thanks to [GB Studio](https://www.gbstudio.dev/). It only allows you to develop very limited small RPGs, but it can be a good start.

To develop in C on GameBoy, we traditionally used GBDK-2020 (literally GameBoy Developers Kit). We use a recent version of SDCC that comes with the GBDK-2020. This version si fully compatible with [SM83](https://gbdev.io/gb-opcodes/optables/) architecture, and it does include libraries to help us in our task. 

So to summarize, we will use:

* SDCC as the compiler,
* and the gbdk-2020 as the runtime library.

If you've followed the steps to prepare your development environment, you're ready to run our first example. All we have to do is compile our first program. What is following is our simple program that prints "Hello World" on the screen:

```
#include <stdio.h>

void main(void) {
    printf("Hello World :)\n");
}
```

Call `make` to compile it. Then call Sandboy to run our code:

```
sandboy Hello.gb
```

And here is the expected output:

![Hello World Screenshot](hello_screenshot.png)
