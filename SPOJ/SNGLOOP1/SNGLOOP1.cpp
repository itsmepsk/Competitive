#include <iostream>

using namespace std;

int main() {
    long long int t,n,m,s,i,p,Sn,Sm;
    cin >> t;
    while(t--) {
        s = 0;
        cin >> n >> m;
        p = (m - n)%4;
        if(p == 0) {
            p = 1;
        }
        else
        if(p == 1) {
            p = 3;
        }
        else
        if(p == 2) {
            p = 9;
        }
        else
        if(p == 3) {
            p = 7;
        }
        cout << p << endl;
    }
    return 0;
}
