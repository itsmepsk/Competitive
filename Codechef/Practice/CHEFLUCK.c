#include <stdio.h>

int main() {
	long long int t,n,m,count1,count2,count3;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		if(n%7 == 0) {
			printf("%lld\n",n);
		}
		else {
			while((n%7)!=0 && n>=4) {
				n = n-4;
			}
			if(n < 4 && n > 0) {
				printf("-1\n");
			}
			else {
				printf("%lld\n",n);
			}
		}
	}
	return 0;
}
