#include <iostream>
#include <cstring>

using namespace std;

int main() {
    long long int t,i,n,ans,count;
    string s;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> s;
        count = 0;
        for(i=0;i<n;i++) {
            if(s[i] == '1') {
                count++;
            }
        }
        n = count;
        ans = (n*n+n)/2;
        cout << ans << endl;
    }
    return 0;
}
