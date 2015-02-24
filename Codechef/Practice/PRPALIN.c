#include <stdio.h>

long long int pal(long long int n) {
	long long int p,d,sum=0;
	p = n;
	sum = 0;
	while(p != 0) {
		d = p%10;
		p = p/10;
		sum = sum*10 + d;
	}
	if(sum == n) {
		return n;
	}
	else {
		return -1;
	}
}


int main() {
	long long int t,i,j,n,p,d,sum,flag;
	scanf("%lld",&n);
	while(1) {
		d = pal(n);
		if(d>0) {	
			flag = 0;		
			for(i=2;i<n;i++) {
				if(n%i == 0) {
					flag = 1;
					break;
				}
			}
			if(flag == 0) {
				printf("%lld\n",n);
				return 0;
			}
		}
		n++;
	}
	return 0;
}
