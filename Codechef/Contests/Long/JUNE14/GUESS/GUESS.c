#include <stdio.h>

int main() {
	long long int t,n,m,a,b;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld",&n,&m);
		a = n%10;
		b = m%10;
		if((a*b)%2 == 0) {
			printf("1/2\n");
		}
		else {
			printf("%lld/%lld\n",(m*n)/2,m*n);
		}
	}
	return 0;
}
