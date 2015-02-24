#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],has[100006] = {0};

int main() {

    long long int t,n,i,maxi = 0;
    cin >> t;
    while(t--) {
        maxi = 0;
        memset(arr,0,sizeof(arr));
        memset(has,0,sizeof(arr));
        cin >> n;
        for(i=0;i<n;i++) {
            cin >>arr[i];
            has[arr[i]]++;
        }
        for(i=1;i<=100005;i++) {
            if(has[i] > maxi) {
                maxi = has[i];
            }
        }

        cout << (n-maxi) << endl;

    }
    return 0;
}
