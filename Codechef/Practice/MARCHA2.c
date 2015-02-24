#include <stdio.h>

long long int arr[1000005];

int main() {
	long long int t,n,i,prev,nodes;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
		}
		if(n == 1) {
			if(arr[0] == 1) {
				printf("Yes\n");
			}
			else {
				printf("No\n");
			}
		}
		else
		if(n>1) {
			if(arr[0] == 1) {
				printf("No\n");
			}
			else {
				prev = 1;
				for(i=1;i<n;i++) {
					if(i == n-1) {
						if(2*prev == arr[i]) {
							printf("Yes\n");
						}
						else {
							printf("No\n");
						}
					}
					else {
						nodes = 2*prev - arr[i];
						prev = nodes;
					}
				}
			}
		}
	}
	return 0;
}
