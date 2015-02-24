#include <stdio.h>

int min(int a,int b,int c) {
	int min1,min;
	min1 = a<b?a:b;
	min = min1<c?min1:c;
	return min;
}

int main() {
	int n,m,i,j,p,q,mini,arr[101][101],brr[101][101];
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			if(i == 0) {
				brr[i][j] = arr[i][j];
			}
			else {
				p = j-1;
				q = j+1;
				if(p >= 0 && q < m) {
					brr[i][j] = arr[i][j] + min(brr[i-1][p],brr[i-1][j],brr[i-1][q]);
				}
				else
				if(p >=0 && q >= m) {
					brr[i][j] = arr[i][j] + min(brr[i-1][p],brr[i-1][j],100000);
				}
				else
				if(p < 0 && q < m) {
					brr[i][j] = arr[i][j] + min(100000,brr[i-1][j],brr[i-1][q]);
				}
			}
		}
	}
	mini = 100000;
	for(i=0;i<m;i++) {
		if(brr[n-1][i] < mini) {
			mini = brr[n-1][i];
		}
	}
	printf("%d\n",mini);
	return 0;
}
