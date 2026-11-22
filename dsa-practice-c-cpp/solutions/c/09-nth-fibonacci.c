// Nth Fibonacci Number (0-based)
#include <stdio.h>
int main(){int n;long long a=0,b=1;scanf("%d",&n);if(n<0){puts("Invalid index");return 0;}for(int i=0;i<n;i++){long long next=a+b;a=b;b=next;}printf("%lld\n",a);}