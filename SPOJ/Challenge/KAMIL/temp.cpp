#include<stdio.h>
#include<cstring>
#include<cmath>
int main(){char s[25];int i,a,p=10,c;while(p--){gets(s);c=0;for(i=0;i<strlen(s);i++){if(s[i]=='T'||s[i]=='D'||s[i]=='L'||s[i]=='F'){c++;}
}a=pow(2,c);printf("%d\n",a);}return 0;}

