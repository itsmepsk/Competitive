#include <stdio.h>
#include <math.h>

int main() {
	int t,count,r,x1,x2,x3,y1,y2,y3;
	float d1,d2,d3;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&r);
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		scanf("%d %d",&x3,&y3);
		count = 0;
		d1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		if(d1 <= r) {
			count++;
		}
		d2 = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));
		if(d2 <= r) {
			count++;
		}
		d3 = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
		if(d3 <= r) {
			count++;
		}
		if(count >= 2) {
			puts("yes");
		}
		else {
			puts("no");
		}
	}
	return 0;
}
