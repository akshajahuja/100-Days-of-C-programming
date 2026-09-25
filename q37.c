#include <stdio.h>
int main(){long long a,b,x,y,t;scanf("%lld%lld",&a,&b);x=a;y=b;while(y){t=x%y;x=y;y=t;}if(x<0)x=-x;printf("%lld",x?((a/x)*b<0?-(a/x)*b:(a/x)*b):0);return 0;}
