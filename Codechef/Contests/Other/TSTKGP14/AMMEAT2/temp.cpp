#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,k,i,j;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        if((k == 1 && n == 1) || (n/k < 2)) {
            cout << "-1" << endl;
        }
        else {
            for(i=1;i<=k;i++) {
                cout << i*2 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
