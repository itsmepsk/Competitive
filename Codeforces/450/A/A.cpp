#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int arr[100005],brr[100005];

int main() {
    int n,m,i,k,p;
    memset(brr,-1,100005);
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
        brr[i] = i;
    }
    k = n+1;
    p = 1;
    for(i=1;;i++) {
        if(arr[i] <= m) {
            p++;
            if(brr[i+1] == -1) {
                printf("%d\n",brr[i]);
                break;
            }
        }
        else {
            arr[k] = arr[i] - m;
            brr[k] = brr[i];
            k++;
        }
    }
    return 0;
}
