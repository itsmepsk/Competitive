#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long int n,arr[101] = {0},brr[101] = {0},max=0,sum,i,j;
	scanf("%lld",&n);
	for(i=0;i<n;i++) {
		scanf("%lld",&arr[i]);
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++) {
		if(arr[i] != arr[i-1]) {
			for(k=0;k<n;k++) {
				brr[k] = 0;
			}
		}
		else {
			
		}
		for(j=i+1;j<n;j++) {
			if()
		}
	}
}
