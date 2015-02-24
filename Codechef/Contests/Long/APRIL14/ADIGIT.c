#include <stdio.h> 
#include <math.h>

int main() {
	int n,m,sum,x,i,j,num,digit[10] = {0},brr[100005],crr[100005];
	char arr[100005],temp[5];
	int v1,v2,v3;
	scanf("%d %d",&n,&m);
	gets(temp);
	gets(arr);
	for(i=1;i<=n;i++) {
		sum=0;
		brr[i] = arr[i-1] - '0';
		for(j=0;j<10;j++) {
			v1=abs(j - brr[i]);
			v2=digit[j];
			sum = sum + v1*v2;
		}
		crr[i] = sum;
		digit[brr[i]]++;
	}
	
	for(j=0;j<m;j++) {
		scanf("%d",&x);
		printf("%d\n",crr[x]);
	}
	return 0;
}
