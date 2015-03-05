#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,i,x,y,ans;
    cin >> t;
    while (t--) {

        cin >> n;
        for (i=0;i<n;i++) {
            cin >> x >> y;
        }
        ans = 1;
        for (i=2;i<=n;i++) {
            ans = ans^i;
        }

        cout << ans << endl;

    }
    return 0;
}
