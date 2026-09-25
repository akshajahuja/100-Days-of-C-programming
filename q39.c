#include <stdio.h>
int main(){long long n,p=1;int found=0,d;scanf("%lld",&n);if(n<0)n=-n;while(n){d=n%10;if(d%2){p*=d;found=1;}n/=10;}printf("%lld",found?p:0);return 0;}
