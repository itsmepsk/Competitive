#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,i,x,m,a;
    cin >> t;
    while(t--) {
        cin >> n >> a >> m;
        x = (a+m)%n;
        if(x == 0) {
            x = n;
        }
       cout << x << endl;
    }
    return 0;
}
