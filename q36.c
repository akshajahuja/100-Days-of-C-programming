#include <stdio.h>
int main(){int a,b,t;scanf("%d%d",&a,&b);while(b){t=a%b;a=b;b=t;}if(a<0)a=-a;printf("%d",a);return 0;}
