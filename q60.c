#include <stdio.h>
int main(){int n,i,x,p=0,ng=0,z=0;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&x);if(x>0)p++;else if(x<0)ng++;else z++;}printf("Positive = %d\nNegative = %d\nZero = %d",p,ng,z);return 0;}
