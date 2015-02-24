#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

long long int k,brr[10005] = {0},arr[10005];

void fact(long long int n) {
    long long int i,sum = 0;
    brr[0] = 1;
    for(i=1;i<=n;i++) {
        brr[i] = ((brr[i-1]%1000000007)*(i%1000000007))%1000000007;
        if(i >= k) {
            sum = sum + brr[i-1]*arr[i];
            sum = sum%1000000007;
        }
    }
    printf("%lld\n",sum);
    return;
}

int main() {
    long long int t,c,n,i;
    scanf("%lld",&t);
    for(c=1;c<=t;c++) {
        scanf("%lld %lld",&n,&k);
        for(i=1;i<=n;i++) {
            scanf("%lld",&arr[i]);
        }
        sort(arr+0,arr+n);
        fact(n);
        /*for(i=0;i<n;i++) {
            printf("%lld ",arr[i]);
        }
        printf("\n");*/
    }
    return 0;
}
