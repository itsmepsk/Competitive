#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t,n,counter,m,k,i;
    scanf("%d",&t);
    while(t--) {
        counter = 0;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++) {
            scanf("%d",&m);
            if(m%2 == 0) {
                counter++;
            }
        }
        if(k == 0 && n == counter) {
            printf("NO\n");
        }
        else
        if(k == 0 && n != counter) {
            printf("YES\n");
        }
        else
        if(counter >= k) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
