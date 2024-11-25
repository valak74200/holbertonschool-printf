<img src="https://github.com/valak74200/holbertonschool-printf/blob/main/holberton-logo_2.png">

<div alig="center">

    #Create a printf function

<\div>
    
## Table of Contents :

- [Project Overview](#Project-Overview)
- [Requirements](#Requirements)
- [Man Page](#Man-Page)
- [Flowchart](#Flowchart)
- [Usage](#Usage)
- [Compilation](#Compilation)
- [Mandatory Tasks](#Mandatory-Tasks)
- [Specifiers](#Specifiers)
- [Installation](#Installation)
- [Examples and Tests](#Examples-and-Tests)
- [Authors](#Authors)

## Project Overview

This project recreate the printf function, a standard library function in the C programming language. The printf function allows you to display formatted text onto the user interface.

## Requirements

**1. Allowed Editors :** You can use 'Vi', 'Vim' or 'Emacs'.

**2. Operating System :** All your files will be compiled on Ubuntu 20.04 LTS.

**3. Coding Style :** This code use Betty Style for consistent and readable code. It will be checked using betty-style.pl and betty-doc.pl.

**4. File Ending :** All the source code files (.c files) end with a newline character (\n).

**5. Variables :** Avoid using global variables. Use local variables.

**6. Functions limits :** Limit the number of functions within each source code file to five or less.

**7. Header :** Include the "main.h" header file in all .c files to access necessary declarations and definitions with the prototypes.

**8. Authorized functions and macros :**

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg) 

## Man Page

The man page is a file wich explains in detail how the function works. If you want see a full explanation of this function you can run our man page this way:
```
$ man ./man_3_printf
```

## Flowchart

## Usage

- To call the '_printf()' function, the next code is required :
```
#include "main.h"

int main() 
{
    _printf("string to print");
    return (0);
}
```

## Compilation

To compile the program, this command has to be executed :
```bash
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
This will create a compilation file. You can run this file in your terminal by using this command :
```bash
$ ./
```

Here's an example of how does the parameters work in our `_printf()` function:
``` 
#include "main.h"

int main()
{
    _printf("Cohort: %i", 25);
    return (0);
}
```
The output of this main function will be:
```
$ ./
Cohort: 25
```

## Mandatory Tasks

### Task 0 :

- Write a function that produces output according to a format and the following conversion specifiers `c`, `s`, and `%`.

### Task 1 :

- Handle the following conversion specifiers `d`, `i`.

### Task 2 :

- Create a man page for your function.

## Specifiers

\_printf supports the following format specifiers :

-   %c: prints a single character
-   %s: prints a string of characters
-	%%: prints a literal '%' character
-   %d: prints a decimal number 
-	%i: signed integer number

## Installation

1. Clone this repository on your local machine :

```bash
git clone https://github.com/valak74200/holbertonschool-printf.git
```

2. Compile the source files with this command :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o 0-printf
```

## Examples and Tests

My tests in comparaison with the standard printf function (main.c file) :

*Input*

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```

*Output*

```

```


## Authors

LOUVEAU Clément <a href="https://github.com/valak74200" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
