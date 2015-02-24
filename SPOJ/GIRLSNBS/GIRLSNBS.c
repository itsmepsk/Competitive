#include <stdio.h>

int main() {
	int g,b,div,rem,max,min;
	while(1) {
		scanf("%d %d",&g,&b);
		if(g == -1 && b == -1) {
			break;
		}
		max = g>b?g:b;
		min = g<b?g:b;
		div = max/(min+1);
		rem = max%(min+1);
		if(rem != 0) {
			div = div + 1;
		}
		printf("%d\n",div);
	}
	return 0;
}
