#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k,s,c,i,sum,counter,arr[1005];
    cin >> n >> k >> s;
    for(i=0;i<n;i++) {
        cin >> arr[i];
    }
    sort(arr+0,arr+n);
    c = k*s;
    counter = 0;
    sum = 0;
    for(i=n-1;i>=0;i--) {
        sum = sum + arr[i];
        counter++;
        if(sum >= c) {
            break;
        }
    }
    cout << counter << endl;
    return 0;
}
