// 01 Reverse a String
#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int l=0,r=(int)s.size()-1;while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}cout<<s<<"\n";}

// 02 String palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int l=0,r=(int)s.size()-1;bool ok=true;while(l<r){if(s[l]!=s[r]){ok=false;break;}l++;r--;}cout<<(ok?"Palindrome":"Not palindrome")<<"\n";}

// 03 Number palindrome
#include <iostream>
using namespace std;
int main(){int n,original,rev=0;cin>>n;original=n;while(n>0){rev=rev*10+n%10;n/=10;}cout<<(original==rev?"Palindrome":"Not palindrome")<<"\n";}

// 04 Reverse integer
#include <iostream>
using namespace std;
int main(){int n,rev=0;cin>>n;while(n!=0){rev=rev*10+n%10;n/=10;}cout<<rev<<"\n";}

// 05 Prime check
#include <iostream>
using namespace std;
int main(){int n;cin>>n;bool p=n>=2;for(int i=2;i*i<=n;i++)if(n%i==0){p=false;break;}cout<<(p?"Prime":"Not prime")<<"\n";}

// 06 Primes in range
#include <iostream>
using namespace std;
int main(){int a,b;cin>>a>>b;for(int n=a;n<=b;n++){bool p=n>=2;for(int d=2;d*d<=n;d++)if(n%d==0){p=false;break;}if(p)cout<<n<<" ";}cout<<"\n";}

// 07 Factorial (values above 20 overflow long long)
#include <iostream>
using namespace std;
int main(){int n;long long f=1;cin>>n;if(n<0){cout<<"Invalid input\n";return 0;}for(int i=1;i<=n;i++)f*=i;cout<<f<<"\n";}

// 08 Fibonacci series
#include <iostream>
using namespace std;
int main(){int n;long long a=0,b=1;cin>>n;for(int i=0;i<n;i++){cout<<a<<" ";long long next=a+b;a=b;b=next;}cout<<"\n";}

// 09 Nth Fibonacci (index starts at zero)
#include <iostream>
using namespace std;
int main(){int n;long long a=0,b=1;cin>>n;if(n<0){cout<<"Invalid index\n";return 0;}for(int i=0;i<n;i++){long long next=a+b;a=b;b=next;}cout<<a<<"\n";}

// 10 Armstrong number (works for non-negative integers)
#include <iostream>
using namespace std;
int main(){int n,temp,digits=0,sum=0;cin>>n;if(n<0){cout<<"Not Armstrong\n";return 0;}temp=n;do{digits++;temp/=10;}while(temp);temp=n;do{int d=temp%10,p=1;for(int k=0;k<digits;k++)p*=d;sum+=p;temp/=10;}while(temp);cout<<(sum==n?"Armstrong":"Not Armstrong")<<"\n";}
