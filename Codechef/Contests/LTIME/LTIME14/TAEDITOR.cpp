#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,n,d,l,i,count;
    string s = "";
    char p;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        if(c == '+') {
            cin >> n;
            string a;
            cin >> a;
            //cout << a << endl;
            s.insert(n,a);
            //cout << s << endl;
        }
        else {
            cin >> d;
            cin >> l;
            cout << s.substr(d-1,l);
            cout << endl;
        }
    }
}
