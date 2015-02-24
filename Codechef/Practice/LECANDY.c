#include <stdio.h>

int main() {
	long long int t,n,c,i,var,sum;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld",&n,&c);
		sum = 0;
		for(i=0;i<n;i++) {
			scanf("%lld",&var);
			sum = sum +  var;
		}
		if(c >= sum) {
			printf("Yes\n");
		}
		else {
			printf("No\n");
		}
	}
	return 0;
}
