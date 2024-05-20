#include<stdio.h>

int main(){

    float a,b;

    printf("Write temperature in Celsius : ");
    scanf("%f", &a);

    b=(9.5*a)+32;

    printf("Fahrenheit = %.2f\n", b);
    
    return 0;
}