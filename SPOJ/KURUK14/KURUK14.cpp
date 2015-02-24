#include <stdio.h>

int main() {
	int t,n,i,k,sum,arr[1005],brr[10000];
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		sum = 0;
		k = 0;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
			sum = sum + arr[i];
			if(i == 0) {
				brr[k] = i;
				k++;
				brr[k] = n - i - 1;
				k++;
			}
			else {
				p = k;
				for(m=p;m<q;m++) {
					brr[k] = brr[m] + arr[i];
					k++; 
				}
				q = k;
			}
		}
		if(sum == arr[k-1] || sum == arr[k-2]) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
