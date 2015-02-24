#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long int t,l,d,s,c,i;
    double sum;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
        i = 1;
        sum = s*pow((c+1),(d-1));
        if(sum >= l) {
            printf("ALIVE AND KICKING\n");
        }
        else {
             printf("DEAD AND ROTTING\n");
        }
    }
    return 0;
}
