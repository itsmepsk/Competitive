#include <stdio.h>
#include <string.h>

int main() {
	int t,l,sum,i,d,brr[27] = {0},crr[27] = {0};
	char arr[250],temp[10];
	scanf("%d",&t);
	gets(temp);
	while(t--) {
		gets(arr);
		l = strlen(arr);
		for(i=0;i<27;i++) {
			brr[i] = 0;
			crr[i] = 0;
		}
		for(i=0;i<l;i++) {
			if(arr[i] >= 'A' && arr[i] <= 'Z') {
				d = arr[i] - 'A' + 1;
				brr[d]++;
			}
			else
			if(arr[i] >= 'a' && arr[i] <= 'z') {
				d = arr[i] - 'a' + 1;
				crr[d]++;
			}
		}
		sum = 0;
		for(i=1;i<=26;i++) {
			sum = sum + brr[i]/2 + brr[i]%2;
			sum = sum + crr[i]/2 + crr[i]%2;
		}
		printf("%d\n",sum);
	}
	return 0;
}
