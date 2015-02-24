#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,j;
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > 0) {
                brr[0][p] = i+1;
                brr[1][p++] = arr[i];
            }
            else
            if(arr[i] < 0) {
                crr[0][q] = i+1;
                crr[1][q++] = -arr[i];
            }
        }

    }
}
