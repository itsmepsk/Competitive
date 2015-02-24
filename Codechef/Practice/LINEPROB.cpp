#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,x1,x2,y1,y2,ans;
    cin >> t;
    while(t--) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(abs(x1-x2) == abs(y1-y2)) {
            cout << abs(x1 - x2) << endl;
        }
        else {
            if(abs(y1-y2) > abs(x1-x2))
                ans = (abs(y1-y2)- 2)*2 + 2;
            else
                ans = (abs(x1-x2)-(abs(y1-y2)-1))*2 + 2;
            cout << ans << endl;
        }
    }
    return 0;
}
