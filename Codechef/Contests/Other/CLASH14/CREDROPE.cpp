#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,i;
    double a,f,c;
    string str;
    cin >> n;
    cin >> str;
    cin >> a >> f;
    c = 0;
    for(i=0;i<n;i++) {
        if(str[i] == 'L') {
            c = c - a;
        }
        else {
            c = c + a;
        }
        if(abs(c) >= f) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
