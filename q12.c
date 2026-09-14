//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n<0)
    printf("this is a negative integer\n");
    else
    {
        if(n>0)
        printf("this is a positive integer\n");
        else
        printf("this is zero integer\n");
}
return 0;
}