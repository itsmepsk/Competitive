#include <stdio.h>
#include <math.h>

unsigned long long int brr[20000000] = {0};

int main() {
	long long int t,i,j,n,p,k,min,arr[10000];
	scanf("%llu",&t);
	while(t--) {
		scanf("%llu",&n);
		p = 0;
		for(i=0;i<n;i++) {
			if(i == 0) {
				scanf("%llu",&arr[i]);
				min = 1000000001;
			}
			else
			if (i == 1) {
				scanf("%llu",&arr[i]);
				brr[p] = abs(arr[1] - arr[0]);
				if(brr[p] < min) {
					min = brr[p];
				}
				p++;
			}
			else {
				scanf("%llu",&arr[i]);
				for(k=0;k<i;k++) {
					brr[p] = abs(arr[k] - arr[i]);
					if(brr[p] < min) {
						min = brr[p];
					}
					p++;
				}
			}
		}
		printf("%llu\n",min);
	}
	return 0;
}
