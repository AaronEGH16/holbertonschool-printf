# Proyect: Printf
## Table of contents
1. [General Info](#general-info)
2. [Functions and their demonstrations](#functions-and-their-demonstrations)
3. [Where users can find help on their project](#where-users-can-find-help-on-their-project)
4. [Authors](#authors)
## General Info
***
#### The new function printf is similar to printf, it prints a message to the screen using a "format string" that includes instructions to mix multiple strings into the final string to be displayed on the screen. It is a special function because it receives a variable number of parameters. The first parameter is fixed and is the format string. It includes text to be printed verbatim and marks to be replaced by text obtained from the additional parameters. The following example shows how the value of the counter variable is printed.

```
_printf("El valor es %d.\n", contador);
```
#### The symbol "%" denotes the beginning of the formatting mark. The "%d" mark is replaced by the value of the counter variable and the resulting string is printed. The symbol "\n" represents a line break. The output, by default, is justified to the right of the total width we have given to the field, which by default is the length of the string.

![Programming](https://th.bing.com/th/id/R.d7e2c996ba4a5960da1b5fc90a31f3be?rik=C7qznfiyAwSj3A&pid=ImgRaw&r=0)

#### Our flowchart for the new printf function
![Flowchart](https://scontent.fmvd1-1.fna.fbcdn.net/v/t39.30808-6/363352742_206988422318117_544877410583787182_n.jpg?_nc_cat=110&cb=99be929b-59f725be&ccb=1-7&_nc_sid=730e14&_nc_ohc=MFRSBk9s-jsAX_vGq68&_nc_ht=scontent.fmvd1-1.fna&oh=00_AfCAoWX1GHb-7EZq-8Wb4voy9RSmttJpA_EdrAnEWE8Y4Q&oe=64C28D99)
## Functions and their demonstrations
***
### As mentioned before, our new printf has the same functions as the original. I will now show different specific formats, what they do and a brief demonstration.

#### The marks in the format string must have the following structure:

```
%type
```

#### Therefore, each flag starts with the symbol "%" and ends with its type. Each of the names represents a set of possible values. At the moment our new function only presents the TYPE values and I will show them below.

#### %c - Prints the corresponding ASCII character.

```
_printf("My name begins with the letter %c\n", 'S');
```
* $ My name begins with the letter S

#### %s - Character string (ending in '\0')

```
_printf("My name is %s\n", Santiago);
```
* $ My name is Santiago

#### %% - Prints the % symbol.

```
_printf("I am 100%%\n");
```
* $ I am 100%

#### %d and %i - Signed decimal conversion of an integer.

```
_printf("I have %d cats and %d dogs\n", 2, 3);
```
* $ I have 2 cats and 3 dogs

#### %b - The unsigned int argument is converted to binary.

```
_printf("The binary of 100 is %b\n", 100);
```
* $ The binary of 100 is 1100100

#### %u - Unsigned decimal conversion of an integer.

```
unsigned int ui = (unsigned int)INT_MAX + 1024;

_printf("%u\n", ui);
```
* $ 2147484671

#### %o - Unsigned octal conversion of an integer.

```
_printf("100 in octal is: %o\n", 100);
```
* $ 100 in octal is: 144

#### %x and %X - Unsigned hexadecimal conversion. With the difference that one has lowercase letters and the other uppercase.

```
_printf("%x\n", 100000000);
```
* $ 5f5e100

#### %r - Prints the reversed string.

```
_printf("%r\n", "Hello");
```
* $ olleH

#### %p - Memory address (pointer)

```
void *p = (void *)0x7ffe637541f0;

_printf("%p\n", p);
```
* $ 0x7ffe637541f0

#### %S - Print all non printable characters in HEX ascii code.

```
_printf("%S\n", "Best\nSchool");
```
* $ Best\x0ASchool

#### $R - Prints the rot13'ed string.

```
_printf("%R\n", "HELLO");
```
* $ URYYB

## Where users can find help on their project
***
```
$ man ./man_3_printf
```

## Authors
***
Authors of the project
> Aaron Gonzalez
> Santiago Fleitas
