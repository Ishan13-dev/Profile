// Reverse a String
#include <iostream>
#include <string>
using namespace std;
int main(){string s;cin>>s;int l=0,r=(int)s.size()-1;while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}cout<<s<<"\n";}