#include <stdio.h>

int main() {
	long long int n,i,max = -1,count = 0,arr[200000];
	scanf("%lld",&n);
	for(i=0;i<n;i++) {
		scanf("%lld",&arr[i]);
		if(arr[i] != 0) {
			count++;
		}
		else {
			if(count > max) {
				max = count;
			}
			count = 0;
		}
	}
	if(count > max) {
		max = count;
	}	
	printf("%lld\n",max);
	return 0;
}
