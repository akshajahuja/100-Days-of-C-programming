#include <stdio.h>
int main(){char s[1000];int i;scanf("%999s",s);for(i=0;s[i];i++){if(s[i]=='0')putchar('1');else if(s[i]=='1')putchar('0');else{printf("Invalid binary number");return 0;}}return 0;}
