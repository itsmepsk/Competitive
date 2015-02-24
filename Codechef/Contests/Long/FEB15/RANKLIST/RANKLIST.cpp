#include <bits/stdc++.h>
using namespace std;

long long int sum(long long int n) {

    return (n*(n+1))/2;

}

int main() {

    long long int t,n,s,i,counter = 0;
    cin >> t;
    while(t--) {
        cin >> n >> s;
        counter = 0;
        for(i=1;i<=n;i++) {
            if (sum(i) <= s-n+i ) {
                counter++;
            }
        }
        cout << n - counter << endl;
    }
    return 0;
}
