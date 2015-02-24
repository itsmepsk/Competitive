#include <stdio.h>
#include <iostream>

using namespace std;

long long int arr[12],brr[12],crr[10] = {0},drr[10] = {0};

long long int digits(long long int p) {
    while(p != 0) {
        arr[i++] = p%10;
        p = p/10;
    }
    i--;
    for(j=i;j>=0;j--) {

    }
}

int main() {
    long long int a,b,i;
    while(1) {
        scanf("%lld %lld",&a,&b);
        if(a == 0 && b == 0) {
            return 0;
        }
        else {
            a = digits(a);
            b = digits(b);
        }
    }
}
