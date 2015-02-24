#include <stdio.h>
#include <iostream>
using namespace std;

int arr[105],brr[105];

int main() {
    long long int t,n,i,j,maxi,counter;
    scanf("%lld",&t);
    while(t--) {
        counter = 0;
        maxi = -1;
        scanf("%lld",&n);
        for(i=0;i<n;i++) {
            scanf("%lld %lld",&arr[i],&brr[i]);
        }
        for(i=0;i<n;i++) {
            counter = 0;
            for(j=0;j<n;j++) {
                if(arr[i] >= arr[j] && arr[i] < brr[j]) {
                    counter++;
                }
            }
            if(counter > maxi) {
                maxi = counter;
            }
        }
        printf("%lld\n",maxi);
    }
    return 0;
}
