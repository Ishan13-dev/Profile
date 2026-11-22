// Factorial (values above 20 overflow long long)
#include <iostream>
using namespace std;
int main(){int n;long long f=1;cin>>n;if(n<0){cout<<"Invalid input\n";return 0;}for(int i=1;i<=n;i++)f*=i;cout<<f<<"\n";}