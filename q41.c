#include <stdio.h>
#include <math.h>
int main(){long long n,t,p=1,first,last,middle,res;scanf("%lld",&n);if(n>=0&&n<10){printf("%lld",n);return 0;}t=n<0?-n:n;last=t%10;while(t/p>=10)p*=10;first=t/p;middle=(t%p)/10;res=last*p+middle*10+first;if(n<0)res=-res;printf("%lld",res);return 0;}
