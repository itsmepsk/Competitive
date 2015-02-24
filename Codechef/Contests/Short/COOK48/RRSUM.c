#include <stdio.h>

int main() {
    long long int n,m,q,p;
    scanf("%lld %lld",&n,&m);
    while(m--) {
        scanf("%lld",&q);
        if(q < n+2 || q > 3*n) {
            printf("0\n");
        }
        else
        if(q < 2*n + 2) {
            printf("%lld\n",q -(n+1));
        }
        else
        if(q >= 2*n+2) {
            p = 2*n+1;
            q = q - p;
            q = n - q;
            printf("%lld\n",q);
        }
    }
    return 0;
}
