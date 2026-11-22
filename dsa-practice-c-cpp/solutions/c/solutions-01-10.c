// 01 Reverse a String
#include <stdio.h>
#include <string.h>
int main(){char s[200];scanf("%199s",s);int l=0,r=(int)strlen(s)-1;while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}printf("%s\n",s);}

// 02 String palindrome
// Input one word; compare both ends.
#include <stdio.h>
#include <string.h>
int main(){char s[200];scanf("%199s",s);int l=0,r=(int)strlen(s)-1,ok=1;while(l<r){if(s[l]!=s[r]){ok=0;break;}l++;r--;}puts(ok?"Palindrome":"Not palindrome");}

// 03 Number palindrome
#include <stdio.h>
int main(){int n,original,rev=0;scanf("%d",&n);original=n;while(n>0){rev=rev*10+n%10;n/=10;}puts(original==rev?"Palindrome":"Not palindrome");}

// 04 Reverse integer
#include <stdio.h>
int main(){int n,rev=0;scanf("%d",&n);while(n!=0){rev=rev*10+n%10;n/=10;}printf("%d\n",rev);}

// 05 Prime check
#include <stdio.h>
int main(){int n,p=1;scanf("%d",&n);if(n<2)p=0;for(int i=2;i*i<=n;i++)if(n%i==0){p=0;break;}puts(p?"Prime":"Not prime");}

// 06 Primes in range
#include <stdio.h>
int main(){int a,b;scanf("%d%d",&a,&b);for(int n=a;n<=b;n++){int p=n>=2;for(int d=2;d*d<=n;d++)if(n%d==0){p=0;break;}if(p)printf("%d ",n);}puts("");}

// 07 Factorial (values above 20 overflow long long)
#include <stdio.h>
int main(){int n;long long f=1;scanf("%d",&n);if(n<0){puts("Invalid input");return 0;}for(int i=1;i<=n;i++)f*=i;printf("%lld\n",f);}

// 08 Fibonacci series
#include <stdio.h>
int main(){int n;long long a=0,b=1;scanf("%d",&n);for(int i=0;i<n;i++){printf("%lld ",a);long long next=a+b;a=b;b=next;}puts("");}

// 09 Nth Fibonacci (index starts at zero)
#include <stdio.h>
int main(){int n;long long a=0,b=1;scanf("%d",&n);if(n<0){puts("Invalid index");return 0;}for(int i=0;i<n;i++){long long next=a+b;a=b;b=next;}printf("%lld\n",a);}

// 10 Armstrong number (works for non-negative integers)
#include <stdio.h>
int main(){int n,temp,digits=0,sum=0;scanf("%d",&n);if(n<0){puts("Not Armstrong");return 0;}temp=n;do{digits++;temp/=10;}while(temp);temp=n;do{int d=temp%10,p=1;for(int k=0;k<digits;k++)p*=d;sum+=p;temp/=10;}while(temp);puts(sum==n?"Armstrong":"Not Armstrong");}
