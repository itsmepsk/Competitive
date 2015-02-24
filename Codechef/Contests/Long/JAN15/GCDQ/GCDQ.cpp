#include <bits/stdc++.h>
using namespace std;

long long int arr[100005],a[100005],b[100005];

int main() {
    long long int t,n,q,l,r,i,j,gcd;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&n,&q);
        for(i=1;i<=n;i++) {
            scanf("%lld",&arr[i]);
        }
        gcd = arr[1];
        for(i=1;i<=n;i++) {
            gcd = __gcd(gcd,arr[i]);
            a[i] = gcd;
        }
        gcd = arr[n];
        for(i=n;i>0;i--) {
            gcd = __gcd(gcd,arr[i]);
            b[i] = gcd;
        }
//        for(i=1;i<=n;i++) {
//            cout << a[i] << " ";
//        }
//        cout << endl;
//        for(i=1;i<=n;i++) {
//            cout << b[i] << " ";
//        }
//        cout << endl;
        for(i=0;i<q;i++) {
            scanf("%lld %lld",&l,&r);
            if (l == 1) {
                gcd = b[r+1];
            }
            else
            if (r == n) {
                gcd = a[l-1];
            }
            else {
                gcd = __gcd(a[l-1],b[r+1]);
            }
            printf("%lld\n",gcd);
        }
    }
    return 0;
}
