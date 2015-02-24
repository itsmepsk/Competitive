#include <stdio.h>
#include <string.h>

int main() {
	int l,count,i;
	char arr[100005];
	while(1) {
		gets(arr);
		unsigned long long int brr[100005] = {0};
		if(arr[0] == '0') {
			break;
		}
		else {
			l = strlen(arr);
			count = 1;
			if(arr[l-1] != '0') {
				brr[l-1] = 1;
			}
			else {
				brr[l-1] = 0;
			}
			for(i=l-2;i>=0;i--) {
				if(arr[i] == '0') {
					brr[i] = brr[i+1];
				}
				else {
					if(i == l-2) {
						if((arr[i+1] == '0')) {
							brr[i] = 1;
						}
						else
						if((arr[i]-'0')*10+(arr[i+1]-'0') <= 26) {
							brr[i] = 2;
						}
						else {
							brr[i] = 1;
						}
					}
					else {
						if(arr[i+2] == '0') {
							brr[i] = brr[i+1];
						}
						else {
							if((arr[i]-'0')*10+(arr[i+1]-'0') <= 26 && arr[i+1] != '0') {
								brr[i] = brr[i+1] + brr[i+2];
							}
							else {
								brr[i] = brr[i+1];
							}
						}
					}
				}
			}
			printf("%llu\n",brr[0]);
		}
	}
	return 0;
}
