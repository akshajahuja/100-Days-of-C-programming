//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",n);
    if(n%2==0)
    printf("the number is even\n");
    else
    printf("the number is odd");
    return 0;    
}