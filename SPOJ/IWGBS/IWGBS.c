#include <stdio.h>

int arr[10007],brr[10007],crr[10007];

void makezero() {
	int i;
	for(i=0;i<10007;i++) {
		arr[i] = 0;
		brr[i] = 0;
		crr[i] = 0;
	}
}

int main() {
	makezero();
	arr[0] = 2;
	brr[0] = 3;
	int t,n,i,j,m=1,carry;
	scanf("%d",&n);
	m = 1;
	if(n == 1) {
		printf("%d\n",arr[0]);
	} 
	else
	if(n == 2) {
		printf("%d\n",brr[0]);
	}
	else {
		for(i=3;i<=n;i++) {
			carry = 0;
			for(j=0;j<=m;j++) {
				crr[j] = (arr[j]+brr[j]+carry)%10;
				carry = (arr[j]+brr[j]+carry)/10;
				arr[j] = brr[j];
				brr[j] = crr[j];
			}
			if(carry != 0) {
				crr[j] = carry;
				brr[j] = carry;
				m++;
			}
		}
		for(i=m;i>=0;i--) {
			if(i == m && crr[i] == 0){
				
			}
			else{
				printf("%d",crr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
