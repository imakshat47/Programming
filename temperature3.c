/*
Write a program to print the corresponding Celsius to Fahrenheit table.
*/

#include<stdio.h>

int main(){
    for(float celcus=0;celcus<300;celcus+=20)
        printf("%3.0f %6.2f %c\n", celcus, ((9*celcus/5.0)+32));    // if extra % prints garbage value
}