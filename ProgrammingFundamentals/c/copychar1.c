 /* copy input to output; 2nd version 
 Any assignment is an expression and has a value, which is the value of the left hand side after the assignment
 */

#include<stdio.h>
int main(){
    int c;
    while((c=getchar())!=EOF)
        putchar(c);
    return 0;
}

/*
The precedence of != is higher than that of =, which means that in the absence of parentheses the relational test != would be done before the  assignment =
*/ 