#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;
int main() {
    char s[25];
    int i,c;
    while((scanf("%s",&s))!=EOF) {
            c=0;
        for(i=0;i<strlen(s);i++) {
            if(s[i] == 'T' || s[i] == 'D' || s[i] == 'L' || s[i] == 'F') {
                c++;
            }
        }
        int a = pow(2,c);
       printf("%d\n",a);
    }
    return 0;
}
