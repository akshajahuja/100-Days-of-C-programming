//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main()
{
char c;
printf("enter an alphabet\n");
scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
    printf("the alphabet is a vowel");
    else
    printf("the alphabet is a consonant");
return 0;
}
