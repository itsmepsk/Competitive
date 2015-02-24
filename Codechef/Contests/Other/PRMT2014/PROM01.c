#include <stdio.h>

int main() {
	long long int p,q,count;
	while(1) {
		scanf("%lld %lld",&p,&q);
		if((p != 0) && (q != 0)) {
			if(p == q) {
				count = 4 + p + q;
				if((p*q)%2 == 0) {
					count = count + 2*(p*q - p);
				}
				else {
					count = count + 2*(p*q - p);
				}
			}
			else {
				count = 4 + p + q + 2*p*q;
			}
			printf("%lld\n",count);
		}
		else {
			break;
		}
	}
	return 0;
}
