#include <stdio.h>

long int max(long int a,long int b) {
	return a>=b?a:b;
}

int main() {
	long int n,k,m,i,j;
	scanf("%ld",&n);
	while(n--) {
		int arr[205] = {0},brr[205] = {0},crr[51][1001] = {0};
		scanf("%ld %ld",&k,&m);
		arr[0] = 0;
		brr[0] = 0;
		for(i=1;i<=m;i++) {
			scanf("%ld %ld",&arr[i],&brr[i]);
		}
		for(i=0;i<=m;i++) {
			for(j=0;j<=k;j++) {
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
		printf("Hey stupid robber, you can get %ld.\n",crr[m][k]);
	}
	return 0;
}
