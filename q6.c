//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    int c=a;
    a=b;
    b=c;
    printf("Numbers after swapping %d %d",a,b);
    return 0; 
} 