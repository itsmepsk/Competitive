#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

int main() {
    lli t,n,p,x,i,counter;
     scanf("%lld",&t);
     while(t--) {
        scanf("%lld %lld",&n,&p);
        counter = 0;
        for(i=0;i<n;i++) {
            scanf("%lld",&x);
            if(x >= p) {
                counter++;
            }
        }
        printf("%lld\n",counter);
     }
    return 0;
}


