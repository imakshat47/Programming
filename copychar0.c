/*copy input to output; 1st version*/

#include<stdio.h>
void main(){
    int c;
    c = getchar();
    while(c!=EOF){
        putchar(c);
        c = getchar();
    }
}