#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,x,counter;
    cin >> t;
    while(t--) {
        cin >> n;
        counter = 0;
        for(i=1;i<=n;i++) {
            cin >> x;
            counter+=(x/i);
        }
        if(counter%2 == 0) {
            cout << "BOB" << endl;
        }
        else {
            cout << "ALICE" << endl;
        }
    }
    return 0;
}
