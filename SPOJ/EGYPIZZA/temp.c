#include <stdio.h>

int main() {
	int n,i,f,l,count = 0,quarter = 0,half = 0,third = 0;
	char a[10],temp[5];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d/%d",&f,&l);
		if(f*l == 4) {
			quarter++;
		}
		else
		if(f*l == 2) {
			half++;
		}
		else
		if(f*l == 12) {
			third++;
		}
	}
	count = 0;
	if(quarter == third) {
		count = count + quarter;
		count = count + half/2;
		count = count + half%2;
	}
	if(quarter < third) {
		count = count + third;
		count = count + half/2;
		count = count + half%2;
	}
	if(quarter > third) {
		count = count + third;
		quarter = quarter - third;
		count = count + half/2;
		half = half%2;
		count = count + quarter/4;
		quarter = quarter%4;
		if(quarter != 0 && half != 0) {
			if(quarter > 2*half) {
				count++;
				quarter = quarter - 2;
				half = 0;
				count = count + quarter;
			}
			else {
				quarter = 0;
				half = 0;
				count++;
			}
		}
		else
		if(quarter != 0 && half == 0 || quarter == 0 && half != 0) {
			count++;
		}
		
	}
	count++;
	printf("%d\n",count);
	return 0;
}
