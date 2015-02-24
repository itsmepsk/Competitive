#include <stdio.h>
#include <iostream>
#include <algorithm>

int main() {
	int t,l,sum,i,d,brr[27] = {0};
	char arr[250],temp[10];
	scanf("%d",&t);
	gets(temp);
	while(t--) {
		gets(arr);
		l = strlen(arr);
		for(i=0;i<l;i++) {
			d = arr[i] - 'a' + 1;
			brr[d]++;
		}
		sum = 0;
		for(i=1;i<=26;i++) {
			sum = sum + brr[i]/2 + brr[i]%2;
		}
		printf("%d\n",sum);
	}
}
