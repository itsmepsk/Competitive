#include <stdio.h>

int main() {
	long long int n,m,i,j,k,val,start,found,count,arr[1005] = {0},brr[2000] = {0},crr[2000] = {0},drr[2000] = {0};
	scanf("%lld",&n);
	for(i=1;i<=n;i++) {
		scanf("%lld",&arr[i]);
	}
	k=0;
	start = 1;
	count = 0;
	val = -1;
	m=0;
	for(i=1;;) {
		if(val != start || count == 1) {
			val = i;
			crr[i] = 1;
			i = arr[i];
			brr[k] = val;
			k++;
			count++;
			found = 0;
		}
		else 
		if(val == start){
			for(j=1;j<=n;j++) {
				if(crr[j] != 1) {
					start = j;
					i = start;
					count = 0;
					found = 1;
					drr[m++] = k;
					break;
				}
			}
		}
		if(j == n+1 && found == 0) {
			break;
		}
	}
	printf("%lld\n",m+1);
	count = 0;
	start = 1;
	m=0;
	for(i=0;i<k;i++) {
		if(i == drr[m]-1) {
			printf("%lld\n",brr[i]);
			m++;
		}
		else {
			printf("%lld ",brr[i]);
		}
	}
	printf("\n");
	return 0;
}
