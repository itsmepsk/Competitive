#include <stdio.h>

int main() {
	long long int a,b,d,i,j,ans,arr[100] = {0};
	scanf("%lld %lld",&a,&b);
	ans = a - b;
	i=0;
	while(ans != 0) {
		arr[i++] = ans % 10;
		ans = ans/10;
	}
	if(arr[0] != 1) {
		arr[0] = 1;
	}
	else {
		arr[0] = 2;
	}
	for(j=i-1;j>=0;j--) {
		printf("%lld",arr[j]);
	}
	printf("\n");
	return 0;
}
