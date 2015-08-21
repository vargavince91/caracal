![Caracal](caracal.png)

# caracal

> The caracal /ˈkærəkæl/ is a medium-sized wild cat that is around one metre long. The caracal is sometimes called the desert lynx or African lynx, but it is not a member of the Lynx genus.
> - [Wikipedia](https://en.wikipedia.org/wiki/Caracal)

## [GCC](https://gcc.gnu.org/)

### What is GCC?

> GCC, the GNU Compiler Collection. GCC used to stand for the GNU C Compiler, but since the compiler supports several other languages aside from C, it now stands for the GNU Compiler Collection.

### How can I get it?

You probably already have it.

If not, you can [download](https://gcc.gnu.org/install/download.html) and [install](https://gcc.gnu.org/install/) GCC.

### Version of GCC

```bash
$ gcc --version
gcc (Ubuntu 4.8.2-19ubuntu1) 4.8.2
```

### Get the latest f version of GCC

Don't have enough space on my computer now, but I'll leave the [Git](https://gcc.gnu.org/wiki/GitMirror) wiki here as a reference.

### [How to run a C program on Ubuntu?](http://stackoverflow.com/questions/4635794/how-to-run-a-c-program-on-ubuntu)

```bash
$ gcc -std=c11 -Wall 00-hello/hello.c -o 00-hello/hello.out
$ 00-hello/hello.out
Hello Caracal!
```
