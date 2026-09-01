#include <stdio.h>
int main(){
    int x, y;
    printf("enter the values of x and y ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("x>y= %d \n",x>y);
    x+=3;
    y-=3;
    printf("updated value of x and y respectively are %d %d", x,y);
    /*printf("x!=y=%d", x!=y);
    printf("updated value of x is %d",x);*/
    
     
   return 0;
    
}

