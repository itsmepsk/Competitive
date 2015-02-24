#include <stdio.h>

int main() {
	int n,t;
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&t);
		for(i=0;i<4;i++) {
			scanf("%d %d",&ct,&cv);
			arr[i][4] = cv;
			arr[i][0] = ct*ct*ct;
			arr[i][1] = ct*ct;
			arr[i][2] = ct;
			arr[i][3] = 1; 
		}	
		for(i=0;i<3;i++) {
			for(j=0;j<5;j++) {
				arr[i][j] = arr[i][j] - arr[i+1][j];
			}
		}
	}
}
