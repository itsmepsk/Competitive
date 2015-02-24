#include <bits/stdc++.h>
using namespace std;

long long int arr[27] = {0};

int main() {
    long long int t,p,q,n,l,i,len,sum,j;
    string str,str1;
    cin >> t;
    while(t--) {
        str = str1;
        memset(arr,0,sizeof(arr));
        cin >> str;
        cin >> p >> q;
        l = str.length();
        for(i=0;i<l;i++) {
            arr[str[i]-'a'+1]++;
        }
        len = 0;
        for(i=1;i<=26;i++) {
            arr[i] = arr[i]*p;
            len = len + arr[i];
        }
        for(i=0;i<q;i++) {
            cin >> n;
            if(n > len) {
                cout << "-1" << endl;
            }
            else {
                sum = 0;
                for(j=1;j<=26;j++) {
                    sum = sum + arr[j];
                    if(n <= sum) {
                        cout << char(j+96) << endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
