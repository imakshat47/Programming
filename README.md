# CPrograms

## Programs
3. Chpychar - getchar(), putchar(), EOF
2. Temperature - Format specifier, Constants 
1. Hello World - Template

## Learnings

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
