#include <stdio.h>

int main() {
	int n,i,f,l,count,arr[3];
	char a[10],temp[5];
	scanf("%d",&n);
	gets(temp);
	for(i=0;i<n;i++) {
		char a[10];
		gets(a);
		f = a[0] - '0';
		l = a[2] - '0';
		if(f*l == 4) {
			arr[0]++;
		}
		else
		if(f*l == 2) {
			arr[1]++;
		}
		else
		if(f*l == 12) {
			arr[2]++;
		}
	}
	count = 0;
	if(arr[0] == arr[2]) {
		count = count + arr[0];
		count = count + arr[1]/2;
		count = count + arr[1]%2;
	}
	if(arr[0] < arr[2]) {
		count = count + arr[2];
		count = count + arr[1]/2;
		count = count + arr[1]%2;
	}
	if(arr[0] > arr[2]) {
		count = count + arr[2];
		arr[0] = arr[0] - arr[2];
		count = count + arr[1]/2;
		arr[1] = arr[1]%2;
		count = count + arr[0]/4;
		arr[0] = arr[0]%4;
		if(arr[0] != 0 && arr[1] != 0) {
			if(arr[0] > 2*arr[1]) {
				count++;
				arr[0] = arr[0] - 2;
				arr[1] = 0;
				count = count + arr[0];
			}
			else {
				arr[0] = 0;
				arr[1] = 0;
				count++;
			}
		}
		else
		if(arr[0] != 0 && arr[1] == 0 || arr[0] == 0 && arr[1] != 0) {
			count++;
		}
		
	}
	count++;
	printf("%d\n",count);
	return 0;
}
