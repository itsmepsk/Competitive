#include <bits/stdc++.h>
using namespace std;

long long int arr[5][101] = {0},counter[5] = {0},ind[5] = {0},ans[5][101] = {0};

int main() {
    long long int n,i,j,m;
    double d;
    char c,temp[5];
    scanf("%lld",&n);
    gets(temp);
    for(i=0;i<n;i++) {
        scanf("%c %lld",&c,&m);
        gets(temp);
        arr[c-'A'][m]++;
        counter[c-'A']++;
    }
    for(i=0;i<5;i++) {
    	if(counter[i] != 0) {
    		for(j=0;j<=100;j++) {
    			d = double(arr[i][j])/(counter[i]);
	            if((d > 0.10)) {
	                ans[i][ind[i]++] = j;
	            }
       	 	}
    	}
    }
    /*
    for(i=0;i<5;i++) {
    	if(counter[i] != 0) {
    		sort(ans[i],ans[i]+ind[i]);
    	}
    }
    */
    for(i=0;i<5;i++) {
    	if(ind[i] != 0) {
    		for(j=0;j<ind[i];j++) {
            	printf("%lld ",ans[i][j]);
	        }
	        printf("\n");
    	}
    	else
		if(ind[i] == 0){
    		printf("Nothing Unusual\n");
    	}
    }
    return 0;
}
