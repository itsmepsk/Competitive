#include <bits/stdc++.h>
using namespace std;

long long int arr[1000] = {0};

int main() {
    long long int t,n,k,i,j,ans,counter;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        memset(arr,0,sizeof(arr));
        if(n == 1) {
            cout << "1" << endl;
        }
        else {
            for(i=2;i<=n;i++) {
                counter = 0;
                for(j=1;j<=n;j++) {
                    if(j%i == 0) {
                        counter++;
                    }
                }
                arr[i] = counter;
            }
            ans = -1;
            for(i=2;i<=n;i++) {
                if(arr[i] >= k) {
                    ans = i;
                    break;
                }
            }
            if(ans == -1) {
                cout << ans << endl;
            }
            else
            for(i=1;i<=k;i++) {
                cout << i*ans << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
