#include <stdio.h>
int main(){long long n,r=0;scanf("%lld",&n);while(n){r=r*10+n%10;n/=10;}printf("%lld",r);return 0;}
