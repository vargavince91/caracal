# Caracal

![Caracal](caracal.png)

> The caracal /ˈkærəkæl/ is a medium-sized wild cat that is around one metre long. The caracal is sometimes called the desert lynx or African lynx, but it is not a member of the Lynx genus.
> *[Wikipedia](https://en.wikipedia.org/wiki/Caracal)*

## Install [CLion](https://www.jetbrains.com/clion/)

> This powerful IDE helps you develop in C and C++ on Linux, enhancing your productivity with a smart editor, code quality assurance, automated refactorings, and deep integration with CMake build system.

1 Download `.tar.gz` and uncompress it.
```bash
$ mkdir /opt/clion && tar -xzf clion-x.y.tar.gz -C /opt/clion
```
2 Add `opt` folder to [path](http://unix.stackexchange.com/questions/26047/how-to-correctly-add-a-path-to-path).
```
export PATH=$PATH:/opt/clion/clion-x.y/bin/
alias clion='clion.sh'
```
3 Enjoy `clion`!


## GCC

> [GCC](https://gcc.gnu.org/), the GNU Compiler Collection. GCC used to stand for the GNU C Compiler, but since the compiler supports several other languages aside from C, it now stands for the GNU Compiler Collection.

### Version of GCC

```bash
$ gcc --version
gcc (Ubuntu 4.8.2-19ubuntu1) 4.8.2
```

### How to run a C program on Ubuntu[?](http://stackoverflow.com/questions/4635794/how-to-run-a-c-program-on-ubuntu)

```bash
$ gcc -std=c11 -Wall 00-hello/hello.c -o 00-hello/hello.out
$ 00-hello/hello.out
Hello Caracal!
```

#### Flags used in this example

* [`-std`](https://gcc.gnu.org/onlinedocs/gcc/C-Dialect-Options.html)`=`[`c11`](https://en.wikipedia.org/wiki/C11_(C_standard_revision)) - control the dialect of C that the compiler accepts and determine the language standard
* [`-Wall`](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html) - enable all the warnings about constructions that some users consider questionable, and that are easy to avoid
* [`-Wextra`](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html) - enable some extra warning flags that are not enabled by `-Wall`
* [`-o file.out`](https://gcc.gnu.org/onlinedocs/gcc/Overall-Options.html) - place output file in *file.out*
