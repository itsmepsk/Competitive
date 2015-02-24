#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,p,i,num,a,b,x,fac,arr[1000],brr[1000] = {0};
    cin >> n;
    cin >> a;
    for(i=0;i<a;i++) {
        cin >> x;
        brr[x]++;
    }
    cin >> b;
    for(i=0;i<b;i++) {
        cin >> x;
        brr[x]++;
    }
    for(i=1;i<=n;i++) {
        if(brr[i] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}

