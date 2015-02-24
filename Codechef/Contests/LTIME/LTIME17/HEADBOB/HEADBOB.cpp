#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,m,i,n,indian,foreign;
    string str,tem;
    cin >> t;
    while(t--) {
        cin >> n;
        str = tem;
        cin >> str;
        indian = 0;
        foreign = 0;
        for(i=0;i<n;i++) {
            if(str[i] == 'I') {
                indian = 1;
            }
            if(str[i] == 'Y') {
                foreign = 1;
            }
        }
        if(indian == 1) {
            cout << "INDIAN" << endl;
        }
        if(indian == 0 && foreign == 1) {
            cout << "NOT INDIAN" << endl;
        }
        else
        if(indian == 0 && foreign == 0) {
            cout << "NOT SURE" << endl;
        }
    }
    return 0;
}
