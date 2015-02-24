#include <stdio.h>

int max(int a,int b,int c) {
	int max1 = a>b?a:b;
	int max2 = max1>c?max1:c;
	return max2;
}

int main() {
	int t,h,w,maxi,p,q,i,j,arr[101][101],brr[101][101];
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&h,&w);
		for(i=0;i<h;i++) {
			for(j=0;j<w;j++) {
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=0;i<h;i++) {
			for(j=0;j<w;j++) {
				if(i == 0) {
					brr[i][j] = arr[i][j];
				}
				else {
					p = j-1;
					q = j+1;
					if(p >= 0 && q < w) {
						brr[i][j] = arr[i][j] + max(brr[i-1][p],brr[i-1][j],brr[i-1][q]);
					}
					else
					if(p >= 0 && q >= w) {
						brr[i][j] = arr[i][j] + max(brr[i-1][p],brr[i-1][j],-1);
					} 
					else
					if(p <= 0 && q < w) {
						brr[i][j] = arr[i][j] + max(-1,brr[i-1][j],brr[i-1][q]);
					}
					else
					if(p <= 0 && q >= w) {
						brr[i][j] = arr[i][j] + brr[i-1][j];
					}
				}
			}
		}
		maxi = -1;
		for(i=0;i<w;i++) {
			if(brr[h-1][i] > maxi) {
				maxi = brr[h-1][i];
			}
		}
		printf("%d\n",maxi);
	}
	return 0;
}
