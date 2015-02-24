#include <stdio.h>

int main() {
	long long int n;
	while(scanf("%lld",&n) != 0) {
		n = n%10000007;
		printf("%lld\n",n);
	}
}
