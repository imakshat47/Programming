# CPrograms

## Programs
7. Arrays - 
Note: use '|' instead of EOF because input from command line instead of file.
6. WordCount -
5. LineCount - '\n' and different escape sequences 
4. CharCount - getchar(), putchar(), EOF, For loop, While loop 
3. CopyChar - getchar(), putchar(), EOF
2. Temperature - Format specifier, Constants 
1. Hello World - Template

## Learnings

> Printing float datatype with int format specifier can return 0. use below:
```c
 printf("%0.f", nc);
```

> Any assignment is an expression and has a value, which is the value of the left hand side after the assignment

> Format Specifiers, Constant Define - temperatures
```c
%6.1f       // specifies 6 width and 1 decimal place precision and float data type
%%          // prints %
printf("%3.0f %6.2f %d\n", celcus, ((9*celcus/5.0)+32));    // if extra % prints garbage value
#define STEP 20 // follows rules for variable naming 
```
> Hello World
```c
#include<stdio.h> // header file for printf

void main(){ // main function for execution
	printf("Hello World!\n"); // prints output  (warning: unknown escape sequence: '\c' if use)
}
```
