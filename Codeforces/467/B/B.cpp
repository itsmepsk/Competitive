#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k,refe,res,p,counter,i,yes,arr[1005];
    cin >> n >> m >> k;
    for(i=0;i<=m;i++) {
        cin >> arr[i];
    }
    refe = arr[m];
    yes = 0;
    for(i=0;i<m;i++) {
        res = arr[i]^refe;
        counter = 0;
        while(res != 0) {
            p = res%2;
            if(p == 1) {
                counter++;
            }
            res = res/2;
        }
        if(counter <= k) {
            yes++;
        }
    }
    cout << yes << endl;
    return 0;
}

