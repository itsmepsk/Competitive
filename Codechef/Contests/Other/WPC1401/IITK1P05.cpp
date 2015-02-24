#include <bits/stdc++.h>
using namespace std;
int arr[100005];
int main() {
    int t,n,i,maxi;
    cin >> t;
    while(t--) {
        cin >> n;
        maxi = -1;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
