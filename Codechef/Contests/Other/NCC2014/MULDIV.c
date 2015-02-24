#include <stdio.h>

int main() {
	long long int t,n,k,m,i;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld %lld",&n,&k,&m);
		if(k == 1) {
			printf("%lld\n",n);
		}
		else {
			while(n%k == 0) {
				n = n/k;
				m--;
			}
			if(m % 2 == 0) {
				printf("%lld\n",n);
			}
			else {
				printf("%lld\n",n*k);
			}
		}
	}
	return 0;
}
