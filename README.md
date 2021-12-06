# C Revision Notes :fire:

# Introdution

Computers does not understand any language it only understands binary.
So we need compilers to compile our `C` code to executable and after that we can execute our file.
Writing a program is just writing a set of instructions if this instructions are executed correctly they will give a result.

## Installations and Setup for Ubuntu

```bash
$ sudo apt install build-essential
```

This Download's required gcc compiler, etc things.

To check for successful installation of it we can check

```bash
$ gcc --version
```

This command should return current version of gcc installed on your system.

_For IDE You can use any IDE of your choice_

## Writing First Program :boom:

We will write our first program, guess which?

It's Hello World Program in C

```c
#include <stdio.h>

int main(){
 printf("Hello World\n");
 return 0;
}
```

Since this is first time I will show how we can run or execute program on Linux System.

```bash
$ gcc <filename.c>
```

In this command remove less than and greater than signs and write our `C` code filename
This command will compile our C code and if any errors then it will show them or will create an executabe file.

We can directly call this file in Terminal

```bash
$ ./a.out
```

_Note every time we complile our file with above command will create a file name `a.out` has executable to create file with our own name we can use_

```bash
gcc <filename.c> -o <outputfilename>
```

After running this command the executable file with `<outputfilename>` will be created.

## Understanding Hello World Program

```c
#include <stdio.h>
```

This is used in include a file named stdio.h in our current program. Below after reading sometime you will be able to understand it more. For now Remember to run our program we compulsoryly need them.

**Next we have main**

```c
int main(){
    printf("Hello World\n");
    return 0;
}
```

This little block of code is called main function since it's name is main. We can see functions/methods in code files. For now we can see and understand that this main is just a conatiner in which we are writing our code.
Evertime we run our program this `main` function will be executed it means all the code written in curly brackets will be looked and executed

Now we can see `printf("Hello World\n");` is a function/method that will print the contents in its parentheses.

_**Semicolons:** At the end of instruction we right semicolons._
_Also note in printf we used `\n` this is newline character there are few more such characters._

**Easy right, now learn from files that are in this Repository. Beginners can go in hierarchy of files but also each file has topic names to it.**
