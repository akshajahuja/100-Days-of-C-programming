#include <stdio.h>
int main(){long long n;int f[10]={0},d,i,best=0;scanf("%lld",&n);if(n<0)n=-n;if(n==0)f[0]=1;while(n){f[n%10]++;n/=10;}for(i=1;i<10;i++)if(f[i]>f[best])best=i;printf("%d",best);return 0;}
