#include<stdio.h>

int main(){

    float a,b,c;

    printf("Enter A Value ");
    scanf("%f", &a);

    printf("Enter B Value ");
    scanf("%f", &b);

    c = a;
    a = b;
    b = c;

    printf("A = %.2f\n", a);
    printf("B = %.2f\n", b);

    return 0;
}