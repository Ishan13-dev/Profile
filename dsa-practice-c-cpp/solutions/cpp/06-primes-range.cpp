// Print Prime Numbers in a Range
#include <iostream>
using namespace std;
int main(){int a,b;cin>>a>>b;for(int n=a;n<=b;n++){bool p=n>=2;for(int d=2;d*d<=n;d++)if(n%d==0){p=false;break;}if(p)cout<<n<<" ";}cout<<"\n";}