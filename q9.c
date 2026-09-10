//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    int p, r, tm, ty;
    printf("enter price, rate, time in months, time in years)\n");
    scanf("%d %d %d %d",&p, &r, &tm, ty);
    float si= (p*r*tm)/100;
    float ci= p*pow((1+r/100),ty)-p;
printf("simple interest is %.2f\n",si);
printf("compound interest is %.2f\n",ci);
return 0;
}