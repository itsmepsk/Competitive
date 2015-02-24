#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,i,n,gcd,arr[1005];
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> arr[i];
        }
        gcd = arr[0];
        for(i=0;i<n;i++) {
            gcd = __gcd(gcd,arr[i]);
        }
        cout << gcd << endl;
    }
    return 0;
}
