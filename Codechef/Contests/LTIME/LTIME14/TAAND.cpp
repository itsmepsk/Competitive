//TAAND

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

long long int arr[100005];

int main() {
    long int n,i,j,temp,maxi;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    sort(arr+0,arr+n);
    printf("%lld\n",arr[n-2]&arr[n-1]);
    return 0;
}

