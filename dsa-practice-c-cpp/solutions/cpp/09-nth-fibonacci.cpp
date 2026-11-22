// Nth Fibonacci Number (0-based)
#include <iostream>
using namespace std;
int main(){int n;long long a=0,b=1;cin>>n;if(n<0){cout<<"Invalid index\n";return 0;}for(int i=0;i<n;i++){long long next=a+b;a=b;b=next;}cout<<a<<"\n";}