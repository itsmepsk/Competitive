#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int n1,n2,n3,i,j,prev,temp,arr[150100],brr[100000];
	scanf("%lld %lld %lld",&n1,&n2,&n3);
	j = 1;
	for(i=0;i<n1;i++) {
		scanf("%lld",&arr[j]);
		j++;
	}
	for(i=0;i<n2;i++) {
		scanf("%lld",&arr[j]);
		j++;
	}
	for(i=0;i<n3;i++) {
		scanf("%lld",&arr[j]);
		j++;
	}
	arr[0] = -1;
	brr[0] = -1;
	sort(arr+1,arr+j);
	prev=0;
	j=1;
	for(i=1;i<=(n1+n2+n3);i++) {
		if(arr[i] == prev) {
			if(brr[j-1]!=arr[i]) {
				brr[j] = arr[i];
				j++;
			}
		}
		prev = arr[i];
	}
	j--;
	printf("%lld\n",j);
	for(i=1;i<=j;i++) {
		printf("%lld\n",brr[i]);
	}
	return 0;
}
