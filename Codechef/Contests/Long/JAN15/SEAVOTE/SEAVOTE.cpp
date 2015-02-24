#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,sum,zero,i,b[10005];
    scanf("%lld",&t);
    while(t--) {
        sum = 0;
        zero = 0;
        scanf("%lld",&n);
        for(i=0;i<n;i++) {
            scanf("%lld",&b[i]);
            sum = sum + b[i];
            if(b[i] == 0) {
                zero++;
            }
        }
        if (sum < 100) {
            printf("NO\n");
        }
        else
        if (sum == 100) {
            printf("YES\n");
        }
        else
        if (sum <= 100 + n - 1 - zero) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
