// Fibonacci Series
#include <iostream>
using namespace std;
int main(){int n;long long a=0,b=1;cin>>n;for(int i=0;i<n;i++){cout<<a<<" ";long long next=a+b;a=b;b=next;}cout<<"\n";}