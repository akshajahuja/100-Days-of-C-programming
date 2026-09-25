#include <stdio.h>
int main(){int n,t,d=0,i;long long sum=0,p;scanf("%d",&n);t=n;do{d++;t/=10;}while(t);t=n;do{int x=t%10;p=1;for(i=0;i<d;i++)p*=x;sum+=p;t/=10;}while(t);printf(sum==n?"Armstrong number":"Not Armstrong number");return 0;}
