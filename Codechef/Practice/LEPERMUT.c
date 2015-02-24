#include <stdio.h>

int main() {
	int t,n,i,j,inv,local,arr[105];
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&n);
		inv = 0;
		local = 0;
		for(i=0;i<n;i++) {
			scanf("%d",&arr[i]);
			for(j=0;j<i;j++) {
				if(arr[j] > arr[i]) {
					inv++;
				}
			}
			if(i>0) {
				if(arr[i] < arr[i-1]) {
					local++;
				}
			}
		}
		if(inv == local) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}
