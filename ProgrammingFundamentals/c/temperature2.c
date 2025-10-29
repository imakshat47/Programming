#include<stdio.h>
/*
Modify the temperature conversion program to print a heading above the table. 
*/
int main(){
    printf("%3c %6c\n",'F','C');
    for(float farh=0;farh<300;farh+=20){
        printf("%3.0f %6.1f\n",farh,(5.0/9*(farh-30)));        
    }
}