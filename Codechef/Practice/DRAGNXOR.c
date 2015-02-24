#include <stdio.h>
#include <math.h>

int main() {
	long long int t,n,a,b,x,i,j,k,counta,countb,max,min,arr[100] = {9},brr[100] = {9};
	scanf("%lld\n",&t);
	while(t--) {
		scanf("%lld %lld %lld",&n,&a,&b);
		counta = 0;
		countb = 0;
		while(a != 0) {
			if(a % 2 == 1) {
				counta++;
			}
			a = a/2;
		}
		while(b != 0) {
			if(b % 2 == 1) {
				countb++;
			}
			b = b/2;
		}
		x = 0;
		if(counta + countb == n) {
			for(i=0;i<n;i++) {
				x = x + pow(2,i);
			}
		}
		if(counta + countb < n) {
			for(i=(n-1);i>=(n - (counta+countb));i--) {
				x = x + pow(2,i);
			}
		}
		if(counta + countb > n) {
			max =  counta>countb?counta:countb;
			min =  counta<countb?counta:countb;
			for(i = n-1;i>=(counta + countb - n);i--) {
				x = x + pow(2,i);
			}
		}
		printf("%lld\n",x);
	}
	return 0;
}
