#include <stdio.h>

int main() {
	int t,c,n,i;
	while(1) {
			scanf("%d",&n);
			if(n != 0) {
				int arr[n+1];
				int count = 0;
				for(i=1;i<=n;i++) {
					scanf("%d",&arr[i]);
				}
				for(i=1;i<=n;i++) {
					if(arr[arr[i]] == i) {
						count++;
					}
				}
				if(count == n) {
					printf("ambiguous\n");
				}
				else {
					printf("not ambiguous\n");
				}
			}
			else {
				break;
			}			
	}
	return 0;
}
