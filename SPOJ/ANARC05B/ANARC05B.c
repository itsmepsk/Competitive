#include <stdio.h>

long long int max(long long int a,long long int b) {
	return a>=b?a:b;
}

int main() {
	long long int n,i,j,l,l1,l2,m,k,r,p,q,sum,arr[11005],brr[11005];
	while(1) {
		scanf("%lld",&n);
		if(n == 0) {
			break;
		}
		else {
			long long int crr[11005] = {0},drr[11005] = {0},err[11005] = {0};
			for(i=0;i<n;i++) {
				scanf("%lld",&arr[i]);
				crr[arr[i]]++;
			}
			scanf("%lld",&m);
			for(i=0;i<m;i++) {
				scanf("%lld",&brr[i]);
				crr[brr[i]]++;
			}
			k = 0;
			r = 0;
			p = 0;
			q = 0;
			j = 0;
			l = 0;
			for(i=0;i<(arr[n-1]>brr[m-1]?arr[n-1]:brr[m-1]);i++) {
				if(crr[i] == 2) {
					for(j=p;arr[j] != i;j++) {
						drr[k] = drr[k] + arr[j];
					}
					drr[k] = drr[k] + i;
					j++;
					p = j;
					k++;
					for(l=q;brr[l] != i;l++) {
						err[r] = err[r] + brr[l];
					}
					err[r] = err[r] + i;
					l++;
					q = l;
					r++;
				}
			}
			while(j < n) {
				drr[k] = drr[k] + arr[j];
				j++;
			}
			k++;
			while(l < m) {
				err[r] = err[r] + brr[l];
				l++;
			}
			r++;
			l1 = k;
			l2 = r;
			sum = 0;
			for(i=0;i<(l1>=l2?l1:l2);i++) {
				if(i<(l1>=l2?l2:l1)) {
					sum = sum + max(drr[i],err[i]);
				}
				else {
					if(l1 > l2) {
						sum = sum + drr[i];
					}
					else {
						sum = sum + err[i];	
					}
				}
			}
			printf("%lld\n",sum);
		}
	}
	return 0;
}
