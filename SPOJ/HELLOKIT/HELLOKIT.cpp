#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
    int n,i;
    string str,str1,str2;
    while(1) {
        str1 = str;
        str2 = str;
        cin >> str2;
        if(str2[0] == '.') {
            break;
        }
        else {
            cin >> n;
            for(i=0;i<n;i++) {
                str1.append(str2);
            }
            cout << str1 << endl;
            for(i=0;i<str2.length()-1;i++) {
                str1.push_back(str1[0]);
                //cout << str1 << endl;
                str1.erase(0,1);
                cout << str1 << endl;
            }
        }
    }
    return 0;
}
