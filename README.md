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
![Flowchart](https://scontent.fmvd1-1.fna.fbcdn.net/v/t39.30808-6/362908011_206907378992888_2994688613866357203_n.jpg?_nc_cat=101&cb=99be929b-59f725be&ccb=1-7&_nc_sid=730e14&_nc_ohc=wpkrYJ89sP0AX-_V1Wj&_nc_ht=scontent.fmvd1-1.fna&oh=00_AfA8QNk7SrFucJ09UUHsDZHrIiAlbUrx3De9nNkgZvxZPA&oe=64C25E93)
## Functions and their demonstrations
***
### As mentioned before, our new printf has the same functions as the original. I will now show different specific formats, what they do and a brief demonstration.

#### %c - Prints the corresponding ASCII character.

```
_printf("My name begins with the letter %d", 'S');
```
* $ My name begins with the letter S

#### %s - Character string (ending in '0')

```
_printf("My name is %s", Santiago);
```
* $ My name is Santiago

#### %% - Prints the % symbol.

```
_printf("I am 100%%");
```
* $ I am 100%

#### %d and %i - Signed decimal conversion of an integer.

```
_printf("I have %d cats and %d dogs", 2, 3);
```
* $ I have 2 cats and 3 dogs

#### %b - The unsigned int argument is converted to binary.

```
_printf("The binary of 100 is %b", 100);
```
* $ The binary of 100 is 1100100

#### %u - Unsigned decimal conversion of an integer.

```
unsigned int ui = (unsigned int)INT_MAX + 1024;

_printf("%u", ui);
```
* $ 2147484671

#### %o - Unsigned octal conversion of an integer.

```
_printf("");


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
