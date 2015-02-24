#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int t,n,ans,i,arr[100005];
    cin >> t;
    while(t--) {
        cin >> n;
        for(i=0;i<n;i++) {
            cin >> arr[i];
        }
        sort(arr+0,arr+n);
        ans = arr[0]+arr[1];
        cout << ans << endl;
    }
    return 0;
}
