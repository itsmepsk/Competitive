#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];

int main() {
    long long int t,n,i,j,sum;
    cin >> t;
    for(j=1;j<=t;j++) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> arr[i];
        }
        sort(arr+0,arr+n);
        sum = arr[n-1] + arr[n-2] + arr[n-3];
        cout << "Case " << j << ": " << sum << endl;
    }
    return 0;
}
