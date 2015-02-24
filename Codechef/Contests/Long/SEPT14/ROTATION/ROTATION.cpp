#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

int main() {
    long long int n,m,d,i,pos,r=0;
    char p;
    cin >> n >> m;
    for(i=0;i<n;i++) {
        cin >> arr[i];
        arr[i+n] = arr[i];
        arr[i+2*n] = arr[i];
    }
    while(m--) {
        cin >> p >> d;
        switch (p) {
            case 'C': {
                r+=d;
                r%=n;
                break;
            }
            case 'A': {
                r-=d;
                r%=n;
                break;
            }
            case 'R': {
                pos = n + r + d;
                cout << arr[pos - 1] << endl;
                break;
            }
        }
    }
    return 0;
}
