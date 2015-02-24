#include <bits/stdc++.h>
using namespace std;

vector <long long int > v,v1;

int main() {
    long long int t,n,i,m,x,ans,sum;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        v = v1;
        for(i=0;i<n;i++) {
            cin >> x;
            v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        sum = 0;
        for(i=0;i<n;i++) {
            sum = sum + v[i];
            if(sum >= m) {
                ans = i+1;
                break;
            }
        }
        if(sum < m) {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}
