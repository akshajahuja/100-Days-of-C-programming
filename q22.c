#include <stdio.h>
int main(){double cp,sp,p; scanf("%lf%lf",&cp,&sp); if(cp<=0){printf("Invalid cost price");return 0;} p=(sp-cp)*100/cp; if(p>0) printf("Profit = %.2f%%",p); else if(p<0) printf("Loss = %.2f%%",-p); else printf("No profit no loss"); return 0;}
