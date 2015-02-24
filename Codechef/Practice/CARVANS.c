#include <stdio.h>

int main() {
	long long int t,n,i,count,limit,arr[10005];
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		count = 0;
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
			if(i == 0) {
				limit = arr[0];
			}
			if(arr[i] <= limit) {
				limit = arr[i];
				count++;
			}
			/*
			else {
				if(arr[i] <= limit) {
					count++;
				}
			}
			*/
		}
		printf("%lld\n",count);
	}
	return 0;
}
