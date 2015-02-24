#include <stdio.h>

long long int brr[2000000] = {0};

int main() {
	long long int t,p,n,m,i,j,k,count,arr[105] = {0};
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld",&n,&m);
		if(m == 0) {
			printf("Yes\n");
		}
		else {
			j=1;
			count = 0;
			p=0;
			for(i=0;i<n;i++) {
				scanf("%lld",&arr[i]);
				brr[p] = arr[i];
				if(arr[i] == m) {
					count = 1;
				}
				k=p;
				p++;
				for(j=0;j<k;j++) {
					brr[p] = brr[j] + arr[i];
					if(brr[p] == m) {
						count = 1;
						break;
					}
					p++;
				}
			}
			if(count == 1) {
				printf("Yes\n");
			}
			else {
				printf("No\n");
			}
		}
	}
	return 0;
}
