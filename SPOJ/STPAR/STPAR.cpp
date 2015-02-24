#include <stdio.h>

int main() {
	while(1) {
		int n,i,k,p,top,m,count,arr[1005] = {0},brr[1005] = {0},crr[1005] = {0};
		scanf("%d",&n);
		if(n == 0) {
			break;
		}
		for(i=1;i<=n;i++) {
			scanf("%d",&arr[i]);
		}
		p = 0;
		k = 1;
		top = 0;
		m = 1;
		for(i=1;i<=n;i++) {
			if(arr[i] == k) {
				brr[m++] = k;
				k++;
				check:
					{
						if(crr[top] == k) {
							brr[m++] = k;
							k++;
							top--;
							goto check;
						}
					}
			}
			else {
				p = top + 1;
				while(arr[i] > k) {
					crr[p++] = arr[i++];
					top = p - 1;
				}
				i--;
			}
		}
		count = 0;
		for(i=1;i<=n;i++) {
			if(brr[i] == i) {
				count++;
			}
		}
		if(count == n) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
	return 0;
}
