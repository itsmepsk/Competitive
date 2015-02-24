#include <bits/stdc++.h>
using namespace std;

long long int arr[100005];
string str,ab;

int main() {
    long long int t,i,j;
    cin >> t;
    while(t--) {
        str = ab;
        cin >> str;
        arr[0] = 1;
        for(i=1;i<=str.length();i++) {
            if(i%2 != 0) {
                if(str[i-1] == 'l') {
                    arr[i] = (2*arr[i-1])%1000000007;
                }
                else {
                    arr[i] = (((2*arr[i-1])%1000000007) + 2)%1000000007;
                }
            }
            else {
                if(str[i-1] == 'l') {
                    arr[i] = (((2*arr[i-1])%1000000007) - 1)%1000000007;
                }
                else {
                    arr[i] = (((2*arr[i-1])%1000000007) + 1)%1000000007;
                }
            }
        }

        for(j=0;j<i;j++) {
            cout << arr[j] << " ";
        }
        cout << endl;

        cout << arr[i-1] << endl;
    }
    return 0;
}
