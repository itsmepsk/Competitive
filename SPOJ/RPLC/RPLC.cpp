#include <stdio.h>
#include <math.h>

long long int arr[1000000];

int main() {
	long long int t,n,sum,i,j,min,count;
	scanf("%lld",&t);
	for(j=1;j<=t;j++) {
		sum = 0;
		min = 1;
		count = 0;
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&arr[i]);
			sum = sum + arr[i];
			if(sum <= 0) {
				min = min + abs(sum);
				if(count != 0) {
					min = min + 1;
				}
				sum = 1;
				count++;
			}
		}
		printf("Scenario #%lld: %lld\n",j,min);
	}
	return 0; 
}
