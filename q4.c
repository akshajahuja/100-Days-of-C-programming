//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    int r;
    printf("enter radius of the circle \n");
    
    scanf("%d",&r);
    printf("area of the circle is %.2f\n",3.14*r*r);
    printf("circumference of the circle is %.2f\n", 2*3.14*r);
    return 0;


}