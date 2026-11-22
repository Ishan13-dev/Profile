// Factorial (values above 20 overflow long long)
#include <stdio.h>
int main(){int n;long long f=1;scanf("%d",&n);if(n<0){puts("Invalid input");return 0;}for(int i=1;i<=n;i++)f*=i;printf("%lld\n",f);}