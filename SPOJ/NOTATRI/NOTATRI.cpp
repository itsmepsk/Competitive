#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int arr[2005],brr[1000005];

int bsearch(int left,int right,int p) {
    long long int mid,ans,n;
    n = right;
    mid = (left + right)/2;
    while(left <= right) {
        if(p < arr[mid]) {
            right = mid-1;
            mid = (left + right)/2;
        }
        else
        if(p > arr[mid]) {
            left = mid+1;
            mid = (left + right)/2;
        }
        else
        if(p == arr[mid]) {
            ans = mid;
            if(arr[ans] > p) {
                return ans;
            }
            else
            if(arr[ans+1] > p && ans+1 <= n) {
                return  ans+1;
            }
            else
            if(arr[ans+2] > p && ans+2 <= n) {
                return  ans+2;
            }
            else
            if((ans+1) > n){
                return n+1;
            }
        }
    }
}

int main() {
    int n,i,sum,j,k,count,ans,p;
    while(1) {
        scanf("%d",&n);
        if(n == 0) {
            return 0;
        }
        else {
            for(i=0;i<n;i++) {
                scanf("%d",&arr[i]);
            }
            sort(arr+0,arr+n);
            sum = 0;
            for(i=0;i<n-2;i++) {
                count = 0;
                for(j=i+1;j<n-1;j++) {
                    p = arr[i] + arr[j];
                    count = count + n - bsearch(j+1,n-1,p);
                }
                sum = sum + count;
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
