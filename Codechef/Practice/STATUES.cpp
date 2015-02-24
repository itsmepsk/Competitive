#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,i,sum,ans,arr[100],p=1;
    while(1) {
        cin >> n;
        if(n == 0) {
            return 0;
        }
        sum = 0;
        for(i=0;i<n;i++) {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        sum = sum/n;
        ans = 0;
        for(i=0;i<n;i++) {
            if(arr[i] < sum) {
                ans = ans + (sum - arr[i]);
            }
        }
        cout << "Set #" << p << endl;
        cout << "The minimum number of moves is " << ans << "." << endl;
        p++;
    }
    return 0;
}
