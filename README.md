# Proyect: Printf
## Table of contents
1. [General Info](#general-info)
2. [Tasks and their demonstrations](#tasks-and-their-demonstrations)
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
## Tasks and their demonstrations
***
### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
#### Write a function that produces output according to a format.
* Prototype: int /_printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* * c
* * s
* * %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
##### REPO: GitHub repository: printf
#

* 

## Where users can find help on their project
***
```
$ man ./man_3_printf
```

## Complete tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
#### Write a function that produces output according to a format.
* Prototype: int /_printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* * c
* * s
* * %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
##### REPO: GitHub repository: printf
#
### 1. Education is when you read the fine print. Experience is what you get if you don't
#### Write a function that prints numbers, followed by a new line.
Handle the following conversion specifiers:
* d
* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
##### REPO: GitHub repository: printf
#
### 2. Just because it's in print doesn't mean it's the gospel
#### Create a man page for your function.
##### REPO: GitHub repository: printf
##### File: man_3_printf

## Authors
***
Authors of the project
> Aaron Gonzalez
> Santiago Fleitas
