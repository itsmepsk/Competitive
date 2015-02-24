#include <bits/stdc++.h>
using namespace std;

long long int a[100005],arr[100005],has[100005];

int main() {
    long long int t,n,k,i,num;
    cin >> t;
    while(t--) {
        memset(has,0,sizeof(has));
        memset(arr,0,sizeof(arr));
        cin >> n >> k;
        for(i=0;i<k;i++) {
            cin >> a[i];
            has[a[i]] = 1;
        }
        num = 0;
        for(i=1;i<=n;i++) {
            if(has[i] != 1) {
                arr[i] = arr[i-1] + i;
            }
            else {
                if(arr[i-1] >= i) {
                    arr[i] = arr[i-1];
                }
                else {
                    num = i;
                    break;
                }
            }
        }
        if(num == 0) {
            num = arr[n] + 1;
        }
        if (num%2 == 0) {
            cout << "Mom" << endl;
        }
        else {
            cout << "Chef" << endl;
        }
        //cout << num << endl;
    }
    return 0;
}
