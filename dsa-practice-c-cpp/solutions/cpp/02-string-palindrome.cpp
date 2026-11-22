// Check String Palindrome
#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int l=0,r=(int)s.size()-1;bool ok=true;while(l<r){if(s[l]!=s[r]){ok=false;break;}l++;r--;}cout<<(ok?"Palindrome":"Not palindrome")<<"\n";}