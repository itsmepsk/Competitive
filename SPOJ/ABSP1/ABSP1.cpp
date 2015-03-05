#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];

int main() {

    long long int t,n,i,sum,dif;
    cin >> t;
    while (t--) {

        cin >> n;

        for (i=0;i<n;i++) {
            cin >> arr[i];
        }

        sum = 0;
        dif = 0;

        for (i=0;i<n;i++) {
            sum = sum + (i)*arr[i];
            dif = dif + (n-i-1)*arr[i];
        }
        sum = sum - dif;
        cout << sum << endl;
    }
    return 0;
}
