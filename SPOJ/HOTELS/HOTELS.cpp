#include <stdio.h>

long long int arr[300005];

int main() {
	long long int n,m,k,sum,i,val;
	scanf("%lld %lld",&n,&m);
	for(i=0;i<n;i++) {
		scanf("%lld",&arr[i]);
	}
	sum = 0,val = 0,k = 0;
    for(i=0;i<n;i++) {
        sum = sum + arr[i];
        if(sum <= m && sum > val) {
            val = sum;
        }
        if(val == m) {
            break;
        }
        if(sum > m) {
            while(sum > m) {
                sum = sum - arr[k];
                k++;
            }
            if(sum > val) {
                val = sum;
            }
            if(val == m) {
                break;
            }
        }
    }
    printf("%lld\n",val);
	return 0;
}
