#include <stdio.h>

int main() {
	long long int n,c,i,j,temp1,temp2,temp3,flag,arr[1005] = {0},brr[1005] = {0},crr[1005] = {0};
	scanf("%lld %lld",&n,&c);
	for(i=0;i<n;i++) {
		scanf("%lld",&brr[i]);
		flag = 0;
		arr[i] = i;
		for(j=0;j<i;j++) {
			if(brr[i] == brr[j]) {
				crr[j]++;
				flag = 1;
				break;
			}
		}
		if(flag == 0) {
			crr[i]++;
		}
	}
	for(i=1;i<n;i++) {
		for(j=0;j<n-1;j++) {
			if(crr[j]<crr[j+1]) {
               temp1=crr[j];
               crr[j]=crr[j+1];
               crr[j+1]=temp1;
               temp2=brr[j];
               brr[j]=brr[j+1];
               brr[j+1]=temp2;
               temp3=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp3;
        	}
		}
	}
	for(i=0;i<n;i++) {
		if(crr[i] != 0) {
			for(j=0;j<crr[i];j++) {
				printf("%d ",brr[i]);
			}
		}
	}
	printf("\n");
	return 0;
}
