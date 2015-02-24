#include <bits/stdc++.h>
using namespace std;

int arr[27],brr[27];

int main() {
    int t,n,i,flag;
    string str,s;
    cin >> t;
    while(t--) {
        str = s;
        cin >> str;
        n = str.length();
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        if(n%2 == 0) {
            for(i=0;i<n/2;i++) {
                arr[str[i]-'a'+1]++;
            }
            for(i=n/2;i<n;i++) {
                brr[str[i]-'a'+1]++;
            }
        }
        else {
            for(i=0;i<n/2;i++) {
                arr[str[i]-'a'+1]++;
            }
            for(i=(n/2)+1;i<n;i++) {
                brr[str[i]-'a'+1]++;
            }
        }
        flag = 0;
        for(i=1;i<27;i++) {
            if(arr[i] != brr[i]) {
                flag = 1;
                break;
            }
        }
        if(flag == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
