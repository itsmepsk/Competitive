#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];

int main() {
    long long int t,n,m,i,x,maxi,sum;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        maxi = -1;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            if(arr[i] > maxi) {
                maxi = arr[i];
            }
        }
        sum = 0;
        for(i=0;i<n;i++) {
            sum = sum + (maxi - arr[i]);
        }
        sum = sum - m;
        if(sum < 0) {
            cout << "No"  << endl;
        }
        else
        if(sum == 0 || sum%n == 0) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No"  << endl;
        }

    }
    return 0;
}
