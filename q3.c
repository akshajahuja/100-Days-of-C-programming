//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    printf("enter the length and breadth of a rectangle\n");
    int l,b;
    scanf("%d %d",&l,&b);
    printf("area of the rectangle is %d\n", l*b);
    printf("perimeter of the rectangle is %d\n", 2*(l+b));
return 0;
}