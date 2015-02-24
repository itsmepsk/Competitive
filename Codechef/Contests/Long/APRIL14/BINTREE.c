#include <stdio.h>

int main() {
	long long int n,i,j,k,maxi,mini,count1=0,count2=0;
	scanf("%lld",&n);
	for(k=0;k<n;k++) {
		count1 = 0;
		count2 = 0;
		scanf("%lld %lld",&i,&j);
		maxi = i>j?i:j;
		mini = i<j?i:j;
		while(maxi!=mini) {
			maxi=maxi/2;
			count1++;
			if(maxi <= mini) {
				if(mini!=maxi && mini !=1) {
					mini = mini/2;
					count2++;
				}
			}
		}
		printf("%lld\n",count1+count2);
	}
	return 0;
}
