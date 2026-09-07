//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    printf("enter two numbers\n");
    int a, b;
    scanf("%d %d",&a,&b);
    printf("their sum is %d\n",a+b);
    printf("their difference is %d\n",a-b);
    printf("their product is %d\n",a*b);
    printf("their quotient is %d\n",a/b);
    return 0;


}