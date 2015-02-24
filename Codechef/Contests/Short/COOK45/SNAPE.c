#include <stdio.h>
#include <math.h>

int main() {
	int t,b,ls;
	float rs1,rs2;
	scanf("%d",&t);
	while(t--) {
		scanf("%d %d",&b,&ls);
		rs1 = sqrt(ls*ls + b*b);
		rs2 = sqrt(ls*ls - b*b);
		printf("%f %f\n",rs2,rs1);
	}
	return 0;
}
