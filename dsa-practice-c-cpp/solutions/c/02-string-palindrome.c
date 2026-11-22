// Check String Palindrome
#include <stdio.h>
#include <string.h>
int main(){char s[200];scanf("%199s",s);int l=0,r=(int)strlen(s)-1,ok=1;while(l<r){if(s[l]!=s[r]){ok=0;break;}l++;r--;}puts(ok?"Palindrome":"Not palindrome");}