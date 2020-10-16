#include <stdio.h>
#include <math.h>


void main(){
    float x;
    printf("Please enter the value of x:");
    scanf("%f", &x);
    x= ((5*(pow(x,2)))+ (sqrt(x))) - 7;
    printf("The expression solved for x gives: %f", x);
}
