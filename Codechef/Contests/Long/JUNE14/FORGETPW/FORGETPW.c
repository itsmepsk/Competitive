#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int t,n,l,i,j,flag2,count1,count2,check1,check2;
	char str[1000005],arr[105],brr[105],in[5],temp[5];
	scanf("%d",&t);
	while(t--) {
		bool flag[1000005] = {false};
		scanf("%d",&n);
		gets(temp);
		for(i=0;i<n;i++) {
			gets(in);
			arr[i] = in[0];
			brr[i] = in[2];
		}
		gets(str);
		l = strlen(str);
		for(i=0;i<n;i++) {
			for(j=0;j<l;j++) {
				if(flag[j] == false) {
					if(arr[i] == str[j]) {
						str[j] = brr[i];
						flag[j] = true;
					}
				}
			}
		}
		count1 = 0;
		check1 = 0;
		for(i=0;i<l;i++) {
			if(str[i] == '0' && check1 == 0) {
				count1++;
			}
			else
			if(str[i] != '0' && check1 == 0) {
				check1 = 1;
				break;
			}
		}
		flag2 = 0;
		for(i=0;i<l;i++) {
			if(str[i] == '.') {
				flag2 = 1;
			}
		}
		count2 = 0;
		check2 = 0;
		if(flag2 == 1) {
			for(i=l-1;i>=0;i--) {
				if(str[i] == '0' && check2 == 0) {
					count2++;
				}
				else {
					check2 = 1;
					break;
				}
			}
			if(str[i] == '.') {
				count2++;
			}
		}
		if(count1 + count2 == l) {
			printf("0\n");
		}
		else {
			for(i=count1;i<(l-count2);i++) {
				putchar(str[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
