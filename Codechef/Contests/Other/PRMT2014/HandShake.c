#include <stdio.h>

int main() {
	long long int t,n,ans;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&n);
		ans = (n*(n-1))/2;
		printf("%lld\n",ans);
	}
	return 0;
}


