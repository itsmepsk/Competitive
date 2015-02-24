#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

long long int arr[100005],brr[100005],crr[100005],drr[100005][2];

int main() {
    long long int n,i,j,ini,dif,l,r,sum1 = 0,sum2 = 0,sum = 0,counter = 0,p = 0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++) {
        scanf("%lld",&arr[i]);
        if(i <= n/2) {
            brr[i] = arr[i];
            sum1 = sum1 + arr[i];
        }
        else {
            crr[i-(n/2)] = arr[i];
            sum2 = sum2 + arr[i];
        }
    }
    ini = abs(sum1 - sum2);
    sort(brr+0,brr+(n/2)+1);
    sort(crr+0,crr+(n/2)+1);
    dif = abs(sum1 - sum2);
    if(n == 2) {
    	printf("0\n");
    	return 0;
    }
    int flag = 0;
    if(sum1 < sum2) {
        for(j=1;j<=(n/2);j++) {
            for(i=1;i<=(n/2);i++) {
                if(brr[i] < crr[j]) {
                    l = i;
                    r = j;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) {
                break;
            }
        }
    }
    else {
        for(j=1;j<=(n/2);j++) {
            for(i=1;i<=(n/2);i++) {
                if(brr[i] > crr[j]) {
                    l = i;
                    r = j;
                    flag = 1;
                    break;
                }
            }
            if(flag == 1) {
                break;
            }
        }
    }
    printf("1\n");
    printf("%d %d\n",l,r);
    return 0;
}
