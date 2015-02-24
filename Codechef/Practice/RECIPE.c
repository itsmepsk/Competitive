#include <stdio.h>

int main() {
	long long int t,n,i,k,min,count,gcd,arr[100] = {0};
	scanf("%lld",&t);
	while(t--) {
		min = 100000;
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
			if(arr[i] < min) {
				min = arr[i];
			} 
		}
		count=0;
		gcd = 1;
		for(i=min;i>=2;i--) {
			k=0;
			count = 0;
			while(arr[k]%i == 0 && k<n) {
				count++;
				k++;
			}
			if(count == (n)) {
				gcd = i;
				break;
			}
		}
		for(i=0;i<n;i++) {
			printf("%lld ",arr[i]/gcd);
		}
		printf("\n");
	}
	return 0;
}
