# Proyect: Printf
## Table of contents
1. [General Info](#general-info)
2. [Demonstration](#demonstration)
3. [Where users can find help on their project](#where-users-can-find-help-on-their-project)
4. [Mandatory tasks](#mandatory-tasks)
5. [Authors](#authors)
## General Info
***
#### Prints a screen message using a "format string" that includes instructions for blending multiple strings into the final string to be displayed on the screen. Similar to printf.
![Programming](https://th.bing.com/th/id/R.d7e2c996ba4a5960da1b5fc90a31f3be?rik=C7qznfiyAwSj3A&pid=ImgRaw&r=0)

## Demonstration
***
```
 _printf("Hello!");
```

* $ Hello!

```
 _printf("result: &d", 1+1);
```

* $ result: 2

```
 _printf("Hello, my name is %s, it starts with the letter %c and I am %d years old. I always work 100%%.", Santiago, 'S', 19)
```

* $ Hello, my name is Santaigo, it starts with the letter S and I am 19 years old. I always work 100%.

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
