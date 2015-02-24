#include <stdio.h>

long long int arr[100005][3],brr[100005][3];

long long int min(long long int a,long long int b,long long int c) {
	return (a>=b?b:a)>=c?c:(a>=b?b:a);
}

long long int mini(long long int a,long long int b,long long int c,long long int d) {
	return ((a<=b?a:b)<=c?(a<=b?a:b):c)<=d?((a<=b?a:b)<=c?(a<=b?a:b):c):d;
}

int main() {
	long long int count = 0,i,j,n;
	while(1) {
		scanf("%lld",&n);
		if(n == 0) {
			break;
		}
		else {
			count++;
			for(i=0;i<n;i++) {
				for(j=0;j<3;j++) {
					scanf("%lld",&arr[i][j]);
				}
			}
			brr[0][0] = arr[0][0];
			brr[0][1] = arr[0][1];
			brr[0][2] = arr[0][2] + arr[0][1];
			for(i=1;i<n;i++) {
				if(i == 1) {
					brr[1][0] = arr[0][1] + arr[1][0];
					brr[1][1] = min(brr[1][0],brr[0][1],brr[0][2]) + arr[1][1];
					brr[1][2] = min(brr[1][1],brr[0][1],brr[0][2]) + arr[1][2];
				}
				else {
					for(j=0;j<3;j++) {
						if(j == 0) {
							brr[i][j] = min(brr[i-1][j],brr[i-1][j+1],10000000) + arr[i][j];
						}
						else
						if(j == 1) {
							brr[i][j] = mini(brr[i][j-1],brr[i-1][j-1],brr[i-1][j],brr[i-1][j+1]) + arr[i][j];
						}
						else
						if(j == 2) {
							brr[i][j] = min(brr[i][j-1],brr[i-1][j-1],brr[i-1][j]) + arr[i][j];
						}
					}
				}
			}
			printf("%lld. %lld\n",count,brr[n-1][1]);
		}
	}
	return 0;
}
