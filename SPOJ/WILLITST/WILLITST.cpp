#include <stdio.h>
#include <math.h>

int main() {
	long long int n,p,flag,arr[100];
	scanf("%lld",&p);
	flag = 0;
	for(n=0;n<=50;n++) {
		arr[n] = pow(2,n);
		if(p == arr[n]) {
			printf("TAK\n");
			flag = 1;
			break;
		}
	}
	if(flag == 0) {
		printf("NIE\n");
	}
	return 0;	
}
