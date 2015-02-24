#include <stdio.h>

long long int brr[10005] = {0},arr[10005] = {0},crr[10005] = {0};

int main() {
    long long int i,j,t,n,q,p,x,y,mi,ma,pa,pb,counter;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        for(i=1;i<=n;i++) {
            scanf("%lld",&arr[i]);
            brr[i] = 0;
        }
        counter = 1;
        scanf("%lld",&q);
        for(j=0;j<q;j++) {
            scanf("%lld",&p);
            if(p == 0) {
            	scanf("%lld %lld",&x,&y);
            	if(crr[brr[x]] == crr[brr[y]]) {

            	}
            }
        }
    }
    return 0;
}

