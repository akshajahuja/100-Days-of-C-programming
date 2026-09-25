#include <stdio.h>
int main(){int n,i,x,e=0,o=0;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&x);if(x%2)e++;else o++;}printf("Even = %d\nOdd = %d",e,o);return 0;}
