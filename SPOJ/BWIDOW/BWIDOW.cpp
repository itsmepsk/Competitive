#include <stdio.h>

int main() {
	long long int t,n,i,j,k,max,max2,arr[1005],brr[1005];
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
			max = -1;
			for(i=0;i<n;i++) {
				scanf("%lld %lld",&arr[i],&brr[i]);
				if(arr[i] > max) {
					max = arr[i];
					j = i;
				}
			}
			max2 = -1;
			for(i=0;i<n;i++) {
				if(i == j) {
					
				}
				else {
					if(brr[i] > max2) {
						max2 = brr[i];
						k = j;
					} 
				}
			}
			if(max2 < max) {
				printf("%lld\n",k+1);
			}
			else {
				printf("-1\n");
			}
	}
	return 0;
}
