#include <stdio.h>

long long int crr[2005][2005];

long long int max(long long int a,long long int b) {
	return a>=b?a:b;
}

int main() {
	long long int s,n,i,j,arr[2005],brr[2005];
	scanf("%lld %lld",&s,&n);
	arr[0] = 0;
	brr[0] = 0;
	for(i=1;i<=n;i++) {
		scanf("%lld %lld",&arr[i],&brr[i]);
	}
	for(i=0;i<=n;i++) {
		for(j=0;j<=s;j++) {
			if(i == 0 || j == 0) {
				crr[i][j] = 0;
			}
			else {
				if(arr[i] <= j) {
					crr[i][j] = max(crr[i-1][j],crr[i-1][j-arr[i]]+brr[i]);
				}
				else {
					crr[i][j] = crr[i-1][j];
				}
			}
		}
	}
	printf("%lld\n",crr[n][s]);
	return 0;
}
