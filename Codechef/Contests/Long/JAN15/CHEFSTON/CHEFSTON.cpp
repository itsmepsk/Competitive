#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,k,a[100005],b[100005],i,x,maxi;
    scanf("%lld",&t);
    while(t--) {
        maxi = -1;
        scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++) {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++) {
            scanf("%lld",&b[i]);
        }
        for(i=0;i<n;i++) {
            x = k/a[i];
            x = x*b[i];
            if(x > maxi) {
                maxi = x;
            }
        }
        printf("%lld\n",maxi);
    }
    return 0;
}
