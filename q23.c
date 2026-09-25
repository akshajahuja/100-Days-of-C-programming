#include <stdio.h>
int main(){int d; double f; scanf("%d",&d); if(d<0) printf("Invalid days"); else if(d>30) printf("Membership Cancelled"); else {if(d<=5)f=d*2;else if(d<=10)f=10+(d-5)*4;else f=30+(d-10)*6; printf("Fine = %.2f",f);}return 0;}
