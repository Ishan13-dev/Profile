// Print Prime Numbers in a Range
#include <stdio.h>
int main(){int a,b;scanf("%d%d",&a,&b);for(int n=a;n<=b;n++){int p=n>=2;for(int d=2;d*d<=n;d++)if(n%d==0){p=0;break;}if(p)printf("%d ",n);}puts("");}