#include <stdio.h>
int main(){double a,b,c; scanf("%lf%lf%lf",&a,&b,&c); if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a) printf("Invalid triangle"); else if(a==b&&b==c) printf("Equilateral"); else if(a==b||b==c||a==c) printf("Isosceles"); else printf("Scalene"); return 0;}
