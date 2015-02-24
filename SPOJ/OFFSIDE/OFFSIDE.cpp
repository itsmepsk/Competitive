#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int a,d,i,b[100],c[100],min,check;
	while(1) {
		scanf("%d %d",&a,&d);
		if(a == 0 && d == 0) {
			break;
		}
		else {
			check = 0;
			for(i=0;i<a;i++) {
				scanf("%d",&b[i]);
			}
			for(i=0;i<d;i++) {
				scanf("%d",&c[i]);
			}
			sort(c+0,c+d);
			min = c[1];
			for(i=0;i<a;i++) {
				if(b[i] < min) {
					check = 1;
					break;
				}
			}
			if(check == 1) {
				printf("Y\n");
			}
			else {
				printf("N\n");
			}
		}
	}
	return 0;
}
