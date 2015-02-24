#include <stdio.h>

int main() {
	int t,c,n;
	long long int sum;
	scanf("%d",&t);
	for(c=0;c<t;c++) {
		scanf("%d",&n);
		sum = (n*(n+1)*(n-1))/6 + n*n;
		if(n>3) {
			sum = sum + (1 + (n-3)*(n-4));
		}
		printf("%lld\n",sum);
	}
	return 0;
}
