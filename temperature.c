/*
Modify the temperature conversion program to print the table in reverse order, that is, from 300 
degrees to 0.
*/

#include<stdio.h>

#define STEP 20 // follows rules for variable naming 
#define UPPER 300 
#define LOWER 0

int main(){
    for(float farh=UPPER;farh>=LOWER;farh-=STEP)
        printf("%3.0f %6.2f\n", farh, (5/9.0)*(farh-32));
}