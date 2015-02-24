#include <stdio.h>

char arr[1000005] = {0};

int main () {
	int a = 22,b = 7,i;
	for(i=0;i<1000002;i++) {
		if(i == 1) {
			arr[i] = '.';
		}
		else {
			if(a < b) {
			a = a*10;
			}
			arr[i] = (a/b) + '0';
			a = a%7;
		}
	}
	puts(arr);
	return 0;
}
