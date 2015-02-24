#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,i,sum;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        sum = 0;
        for(i=2;i*i<=n;i++) {
            if(n%i == 0) {
                sum = sum + i;
                //cout << i << " ";
                if(i != (n/i)) {
                    sum = sum + (n/i);
                }
                //cout << (n/i) << " ";
            }
        }
        if(n != 1) {
            sum++;
        }
        //cout << endl;
        printf("%lld\n",sum);
    }
    return 0;
}
