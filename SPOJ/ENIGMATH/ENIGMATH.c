#include <stdio.h>

unsigned long long int gcd(int c,int d) {
	if(c%d == 0) {
		return d;
	}
	else {
		gcd(d,c%d);
	}
}

int main() {
	long long int t,a,b,g,x,y;
	scanf("%lld",&t);
	while(t--) {
		scanf("%lld %lld",&a,&b);
		g = a>b?gcd(a,b):gcd(b,a);
		x = b/g;
		y = a/g;
		printf("%lld %lld\n",x,y);
	}
	return 0;
}
