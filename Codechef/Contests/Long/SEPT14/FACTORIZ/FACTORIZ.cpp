#include <bits/stdc++.h>
using namespace std;

long long int arr[1000005],p = 0;

void func(long long int n) {
	long long int i,flag = 0;
	for(i=2;i*i<=n;i++) {
		if(n%i == 0) {
			arr[p++] = i;
			//arr[p++] = (n/i);
			flag = 1;
			break;
		}
	}
	if(flag == 0) {
		arr[p++] = n;
		return;
	}
	else {
		long long int r = (n/i);
		func(r);		
	}
}

int main() {
    long long int t,n,l,i,counter;
    char num[1005],temp[5];
    scanf("%lld",&t);
    gets(temp);
    while(t--) {
        gets(num);
        l = strlen(num);
        if(l <= 16) {
    	    n = 0;
            for(i=l-1;i>=0;i--) {
                n = n + (num[i]-'0')*(pow(10,l-i-1));
            }
            p = 0;
			func(n);
			printf("%lld\n",p);
			for(i=0;i<p;i++) {
				printf("%lld\n",arr[i]);
			}	            
        }
        else {
        	for(i=0;i<l;i++) {
        		brr[i] = num[i] - '0';
        	}
        	num = arr[l-1]+10*arr[l-2];
        	if()
        }
    }
    return 0;
}
