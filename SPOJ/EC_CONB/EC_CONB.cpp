#include <stdio.h>
#include <math.h>

int main() {
	long long int t,n,a,i,j,k,num,arr[100000];
	scanf("%lld",&n);
	for(k=0;k<n;k++) {
		scanf("%d",&a);
		if(a%2 != 0) {
			printf("%d\n",a);
		}
		else {
			i = 0;
			while(a != 0) {
				arr[i] = a%2;
				a = a/2;
				i++;
			}
			i--;
			num = 0;
			for(j=i;j>=0;j--) {
				num = num + arr[j] * pow(2,i-j);
			}
			printf("%d\n",num);
		}
	}
	return 0;
}
