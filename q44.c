#include <stdio.h>
int main(){int n,i;double s=0;scanf("%d",&n);for(i=1;i<=n;i++){if(i==1)s+=1;else s+=(double)(2*i-1)/(2*i);}printf("%.6f",s);return 0;}
