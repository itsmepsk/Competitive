#include <stdio.h>
#include <math.h>

int main() {
	long long int t,n,m,i,j,dif,min;
	scanf("%lld",&t);
	while(t--) {
		long long int arr[1005] = {0},brr[1005] = {0};
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
		}
		scanf("%lld",&m);
		for(i=0;i<m;i++) {
			scanf("%lld",&brr[i]);
		}
		min = 1000000000;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				dif = arr[i] - brr[j];
				dif = abs(dif);
				if(dif < min) {
					min = dif;
				}
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}
