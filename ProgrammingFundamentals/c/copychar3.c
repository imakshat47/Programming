/*Write a program to print the value of EOF.*/
#include<stdio.h>
int main(){
    printf("%d\n",EOF); // decimal
    printf("%u\n",EOF); // decimal

    printf("%f\n",EOF); // float
    printf("%c\n",EOF); // char
    printf("%ld\n",EOF);    // long double
    printf("%x\n",EOF); // hexadecimal
    printf("%o",EOF);   // octal
}