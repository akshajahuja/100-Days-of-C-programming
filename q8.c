//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main(){
    int n,i,sum;
    printf("enter the first n natural numbers");
scanf("%d",&n);
for(i=1; i<=n; i++){
    sum+=i;
}
printf("sum is %d",sum);
return 0;
}