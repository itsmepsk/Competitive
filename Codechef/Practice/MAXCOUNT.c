#include <stdio.h>

int main() {
	long long int t,n,p,i,num,max,lim,brr[10005] = {0};
	scanf("%lld",&t);
	while(t--) {
		for(i=0;i<10005;i++) {
			brr[i] = 0;
		}
		scanf("%lld",&n);
		for(i=0;i<n;i++) {
			scanf("%lld",&p);
			brr[p]++;
			if(p >= lim) {
				lim = p;
			}
		}
		max = -1;
		num = 10;
		for(i=lim;i>=0;i--) {
			if(brr[i] >= max && brr[i]>0) {
				num = i;
				max = brr[i];
			}
		}
		printf("%lld %lld\n",num,max);
	}
	return 0;
}
