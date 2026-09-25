#include <stdio.h>
int main(){int a[100],n,x,l=0,r,m,i;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);r=n-1;while(l<=r){m=(l+r)/2;if(a[m]==x){printf("Found at position %d",m+1);return 0;}if(a[m]<x)l=m+1;else r=m-1;}printf("Not found");return 0;}
