#include<stdio.h>
#include<math.h>
unsigned long long int crr[1562501]={0},drr[1562501] = {0};
int main() {
	unsigned long long int t,c,n,var=0,i,j=1,k,limit,count=0,count2=0,arr[3000] = {0},brr[3000] = {0};
	unsigned long long int sum=0;

    crr[1]=1;
    drr[1] = 1;
      for(i=2; i<=1562501; i++)
      {

          for(j=1; (i*j)<=1562501; j++)
           {
           		if(drr[j] == 0) {
           			drr[j] = 1;
           		}
           		if(drr[(i*j)] == 0) {
           			drr[i*j] = 1;
           		}
               drr[(i*j)]+=1;
           }
           crr[i] = crr[i-1] + drr[i];
       }

	scanf("%llu",&t);
	for(c=0;c<t;c++) {
		count=0;
		sum=0;
		j=1;
		scanf("%llu",&n);
		for(i=1;i<=n/2;i++) {
			arr[j] = i;
			brr[n-j] = i;
			brr[j] = n-i;
			arr[n-j] = n-i;
			count++;
			j++;
		}
		for(i=1;i<=count;i++) {
			var = arr[i]*brr[i] - 1;
			if(arr[i] == brr[i]) {
				var = crr[var];
			}
			else {
				var = crr[var]*2;
			}
			sum = sum + var;
		}
		printf("%llu\n",sum);
	}
	return 0;
}
