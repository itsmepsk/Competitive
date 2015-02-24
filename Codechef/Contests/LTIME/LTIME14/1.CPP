//TAAND

#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;

long long int arr[100005];

int main() {
    long int n,i,j,temp,maxi;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    maxi = -1;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            temp = arr[i] & arr[j];
            if(temp > maxi) {
                maxi = temp;
            }
        }
    }
    printf("%lld\n",maxi);
    return 0;
}
