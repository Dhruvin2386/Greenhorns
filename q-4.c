#include<stdio.h>

int main(){

    float base,hra,da,ta,gross;

    printf("Enter your Basic Salary ");
    scanf("%f", &base);

    printf("Enter your HRA ");
    scanf("%f", &hra);

    printf("Enter your D.A. ");
    scanf("%f", &da);

    printf("Enter your T.A. ");
    scanf("%f", &ta);

    gross = base + hra + da + ta;

    printf("Your Total Gross Salary is %.2f\n", gross);

    return 0;
}