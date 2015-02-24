#include <stdio.h>

int main() {
	long long int t,n,m,i,j,k,a,count;
	scanf("%lld",&t);
	while(t--) {
		long long int arr[2000] = {0},chef[2000] = {0},assi[2000] = {0};
		scanf("%lld %lld",&n,&m);
		for(i=1;i<=m;i++) {
			scanf("%lld",&a);
			arr[a] = 1;
		}
		count = 1;
		j=1;
		k=1;
		for(i=1;i<=n;i++) {
			if(arr[i] != 1) {
				if(count%2 != 0) {
					chef[j] = i;
					count++;
					j++;
				}
				else {
					assi[k] = i;
					count++;
					k++;
				}
			}
		}
		for(i=1;i<=j;i++) {
			if(chef[i] != 0) {
				printf("%lld ",chef[i]);
			}
		}
		printf("\n");
		for(i=1;i<=k;i++) {
			if(assi[i] != 0) {
				printf("%lld ",assi[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
