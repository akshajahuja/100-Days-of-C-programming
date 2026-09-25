#include <stdio.h>
int main(){int n,i;unsigned long long f=1;scanf("%d",&n);if(n<0){printf("Not defined");return 0;}for(i=2;i<=n;i++)f*=i;printf("%llu",f);return 0;}
