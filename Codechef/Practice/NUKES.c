#include <stdio.h>

int main() {
	long long int a,n,k,i=0,arr[101] = {0};
	scanf("%lld %lld %lld",&a,&n,&k);
	while(a != 0) {
		arr[i++] = a%(n+1);
		a = a/(n+1);
		if(i == k) {
			break;
		}
	}
	for(i=0;i<k;i++) {
		printf("%lld ",arr[i]);
	}
	return 0;
}
