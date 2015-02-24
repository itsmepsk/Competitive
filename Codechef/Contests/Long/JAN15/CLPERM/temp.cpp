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
        for(i=1;i<=k;i++) {
            cin >> a[i];
            has[i] = has[i-1] + a[i];
        }
        sort(a,a+k+1);
        num = 0;
        a[0] = 0;
        for(i=1;i<=k;i++) {
            if((a[i]-1) == a[i-1]) {
                arr[i] = arr[i-1];
            }
            else {
                arr[i] = (((a[i])*(a[i]+1))/2)-has[i];
            }
            if(arr[i] < a[i]) {
                num = a[i];
                break;
            }
        }
        if(num == 0) {
            num = (n*(n+1))/2 - has[k] + 1;
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

