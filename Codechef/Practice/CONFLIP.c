#include <stdio.h>

int main() {
	long long int t,g,n,l,q;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld",&g);
		while(g--) {
			scanf("%lld %lld %lld",&l,&n,&q);
			if(l == 1) {
				if(n%2 == 0) {
					printf("%lld\n",n/2);
				}
				else {
					if(q == 1) {
						printf("%lld\n",n/2);
					}
					else {
						printf("%lld\n",(n/2)+1);
					}
				}
			}
			else {
				if(n%2 == 0) {
					printf("%lld\n",n/2);
				}
				else {
					if(q == 1) {
						printf("%lld\n",(n/2)+1);
					}
					else {
						printf("%lld\n",n/2);
					}
				}
			}
		}
	}
	return 0;
}
