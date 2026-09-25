#include <stdio.h>
int main(){long long n,t,r=0;scanf("%lld",&n);t=n;while(t){r=r*10+t%10;t/=10;}printf(n==r?"Palindrome":"Not Palindrome");return 0;}
