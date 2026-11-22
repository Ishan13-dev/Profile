// Armstrong Number for non-negative integers
#include <iostream>
using namespace std;
int main(){int n,temp,digits=0,sum=0;cin>>n;if(n<0){cout<<"Not Armstrong\n";return 0;}temp=n;do{digits++;temp/=10;}while(temp);temp=n;do{int d=temp%10,p=1;for(int k=0;k<digits;k++)p*=d;sum+=p;temp/=10;}while(temp);cout<<(sum==n?"Armstrong":"Not Armstrong")<<"\n";}