#include <stdio.h>
int main(){int n,i;unsigned long long p=1;scanf("%d",&n);for(i=2;i<=n;i+=2)p*=i;printf("%llu",p);return 0;}
