#include <bits/stdc++.h>
using namespace std;

long long int arr[1000000],brr[1000000];

int main() {
    long long int t,n,i,x,counter1,counter2,flag;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        for(i=0;i<n;i++) {
            scanf("%lld",&arr[i]);
        }
        sort(arr,arr+n);
        x = arr[0];
        for(i=1;i<n;i++) {
            x = __gcd(arr[i],x);
            brr[i] = x;
        }
        counter1 = 0;
        for(i=1;i<n;i++) {
            if(brr[i] == 1) {
                counter1++;
            }
        }
        counter2 = 0;
        flag = 0;
        for(i=2;i<n;i++) {
            if(brr[i] == brr[i-1] && brr[i] != 1) {
                counter2++;
            }
            else {
                flag = 1;
            }
        }
        if(n == 1) {
            printf("-1\n");
        }
        else
        if(counter1 == (n-1) || flag == 1) {
            printf("%lld\n",n);
        }
        else {
            printf("-1\n");
        }
    }
    return 0;
}

