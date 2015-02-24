#include <stdio.h>
#include <string.h>
int main()
{
	int c;
	char a[1000] = {0},b[1000] = {0},temp[10];
	int nata[1000],sum[1000] = {0},dif[1000] = {0},klau[1000];
	int rem,div,l1,l2,i,carry = 0,borrow,tem = 0,var = 0;
	for(c=0;c<10;c++)	{
		gets(a);
		gets(b);
		l1 = strlen(a);
		l2 = strlen(b);
		for(i=0;i<1000;i++) {
			nata[i] = 0;
			sum[i] = 0;
			dif[i] = 0;
			klau[i] = 0;
		}
		for(i=l1-1;i>=0;i--) {
			sum[l1-1-i] = a[i] - '0';
		}
		for(i=l2-1;i>=0;i--) {
			dif[l2-1-i] = b[i] - '0';
		}
		tem = 0;
		for(i=0;i<l1;i++) {
			var = (sum[i] + dif[i] + tem)%10;
			tem = (sum[i] + dif[i] + tem)/10;
			klau[i] = var;
		}
		if(tem != 0) {
			klau[i] = tem;
			tem = tem/10;
			l1++;
		}
		borrow = 0;
		for(i=0;i<l1;i++) {
			if(sum[i] < dif[i]) {
				sum[i+1] = sum[i+1] - 1;
				borrow = 1;
			}
			else {
				borrow = 0;
			}
			sum[i] = sum[i] + borrow*10;
			nata[i] = sum[i] - dif[i];
		}
		rem = 0;
		for(i=l1-1;i>=0;i--) {
			div = (klau[i] + 10*rem)/2;
			rem = (klau[i] + 10*rem)%2;
			klau[i] = div;
		}
		rem = 0;
		for(i=l1-1;i>=0;i--) {
			div = (nata[i] + 10*rem)/2;
			rem = (nata[i] + 10*rem)%2;
			nata[i] = div;
		}
		carry = 0;
		for(i=l1-1;i>=0;i--) {
			while(klau[i] == 0 && carry == 0) {
				i--;
			}
			carry = 1;
			printf("%d",klau[i]);
		}
		printf("\n");
		carry = 0;
		for(i=l1-1;i>=0;i--) {
			while(nata[i] == 0 && carry == 0) {
				if(i == 0 && carry == 0) {
					carry = 1;
					i++;
				}
				i--;
			}
			carry = 1;
			printf("%d",nata[i]);
		}
		printf("\n");
	}
return 0;
}
