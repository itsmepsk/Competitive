#include <stdio.h>
#include <iostream>

int main() {
    long long int t,n,i,sum,temp,arr[100005];
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        sum = 0;
        for(i=0;i<n;i++) {
            scanf("%lld",&arr[i]);
            if(i == 0) {
                sum = sum + arr[i];
                temp = sum;
                temp--;
            }
            else {
                if(temp < arr[i]) {
                    sum = sum + (arr[i] - temp);
                    temp = temp + (arr[i] - temp);
                    temp--;
                }
                else {
                	temp--;
                }
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
