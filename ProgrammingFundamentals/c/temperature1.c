#include<stdio.h>
/*
Resolved Issues:
- Int divide by int resuts in int 
- float celsius can be used for better results
- less variables can be used using For loop as fixed step increment 
- printing format can be imporved
*/
int main(){
    for(float farh=0;farh<300;farh+=20){
        printf("%3.0f %6.1f\n",farh,(5.0/9*(farh-30)));
    }
}