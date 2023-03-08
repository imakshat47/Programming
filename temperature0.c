#include<stdio.h>
// using C=(5/9)(F-32) 
int main(){
    int farh, cels, lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    farh = lower;
    while(farh<upper){
        cels = 5/9 * (farh-30);
        farh+=step;
        printf("%d\t%d\n",farh,cels);
    }

    return 0;
}

/*
Issues:
- Int divide by int resuts in int 
- float celsius can be used for better results
- printing format can be imporved
*/