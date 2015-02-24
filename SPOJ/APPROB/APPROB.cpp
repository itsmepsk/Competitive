#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,sum,i,tot,g,p,q;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        sum = 0;
        if(n%2 == 0) {
            sum = (3*n*n)/2;
            p = (n/2);
            p = p*(p+1);
            sum = sum - p + n;
            p = n/2;
            p = p - 1;
            p = p*(p+1);
            p = p/2;
            sum = sum + 2*p;
        }
        else {
            p = 3*n;
            p = p/2;
            p = n*p;
            q = (n/2);
            q = q+1;
            q = (n/2)*q;
            sum = p - q + n;
            p = n/2;
            q = p;
            p = p - 1;
            sum = sum + 2*((p*(p+1))/2) + q;
        }
        tot = (6*n*n*n);
        g = __gcd(tot,sum);
        sum = sum/g;
        tot = tot/g;
        printf("%lld/%lld\n",sum,tot);
    }
    return 0;
}
