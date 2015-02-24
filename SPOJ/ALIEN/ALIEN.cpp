#include <stdio.h>

long long int arr[100005];

int main() {
    long long int t,i,a,k,b,p,sum,count,max,min;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&a,&b);
        for(i=0;i<a;i++) {
            scanf("%lld",&arr[i]);
        }
        sum = 0;
        p = 0;
        count = 0;
        max = -1;
        min = 100000000000;
        for(i=0;i<a;i++) {
            sum = sum + arr[i];
            count++;
            if(sum < b) {
                if(count > max) {
                    max = count;
                    min = sum;
                }
                else
                if(count == max) {
                    if(sum < min) {
                        min = sum;
                    }
                }
            }
            else
            if(sum == b) {
                if(count > max) {
                    max = count;
                    min = sum;
                }
            }
            else
            if(sum > b) {
                k = p;
                while(sum > b) {
                    sum = sum - arr[k];
                    k++;
                    count--;
                }
                if(count > max) {
                    max = count;
                    min = sum;
                }
                else
                if(count == max) {
                	if(sum < min) {
                        min = sum;
                    }
                }
                p = k;
            }
        }
        printf("%lld %lld\n",min,max);
    }
    return 0;
}
