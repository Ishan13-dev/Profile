// Reverse a String
#include <stdio.h>
#include <string.h>
int main(){char s[200];scanf("%199s",s);int l=0,r=(int)strlen(s)-1;while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}printf("%s\n",s);}