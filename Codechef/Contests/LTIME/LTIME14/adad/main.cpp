#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char s[1000005],a,k[100005],temp[100005];
    int n,q,x,m,i,p,l;
    cin >> q;
    while(q--) {
        cin >> a;
        if(a == '+') {
            cin >> n;
            if(n == 0) {
                cin >> s;
            }
            else
            if(s[n] != '\0') {
                cin >> k;
                x = strlen(k);
                m = 0;
                for(i=n;i<strlen(s);i++) {
                    temp[m++] = s[i];
                }
                m = 0;
                for(i=n;m!=x;i++) {
                    s[i] = k[m++];
                }
                m = 0;
                for(i=strlen(s);m!=strlen(temp);i++) {
                    s[i] = temp[m++];
                }
            }
            else {
                for(i=n-1;m!=x;i++) {
                    s[i] = k[m++];
                }
            }
            cout << s << endl;
        }
        else {
            cin >> p;
            cin >> l;
            m = 0;
            for(i=p-1;m!=l-1;i++) {
            	putchar(s[i]);
            }
            cout << endl;
        }
    }
}
