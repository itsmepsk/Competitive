#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
    long long int t,x,y,p,q;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld %lld",&x,&y);
        if(x < 0) {
            p = abs(x);
            q = abs(y);
            if(p%2 == 0) {
                if(y <= p && y >= x) {
                    printf("YES\n");
                }
                else
                if(y%2 == 0) {
                    printf("YES\n");
                }
                else {
                     printf("NO\n");
                }
            }
            else {
                p = abs(x);
                q = abs(y);
                if(y >= p+1 && q%2 == 0) {
                    printf("YES\n");
                }
                else
                if(y <= -1*(p+1) && q%2 == 0) {
                    printf("YES\n");
                }
                else {
                    printf("NO\n");
                }
            }
        }
        else
        if(x > 0) {
            q = abs(y);
            if(x%2 == 1) {
                if((y >=  -1*x + 1 && y <= x+1)) {
                    printf("YES\n");
                }
                else
                if(y > 0) {
                    if(y%2 == 0) {
                        printf("YES\n");
                    }
                    else {
                        printf("NO\n");
                    }
                }
                else
                if(y < 0) {
                    q = abs(y);
                    if(q%2 == 0) {
                        printf("YES\n");
                    }
                    else {
                        printf("NO\n");
                    }
                }
                else {
                    printf("NO\n");
                }
            }
            else {
                q = abs(y);
                if(y >= x+2 && y%2 == 0) {
                    printf("YES\n");
                }
                else
                if(y <= -1*x && y%2 == 0) {
                    printf("YES\n");
                }
                else {
                    printf("NO\n");
                }
            }
        }
        else
        if(x == 0) {
            q = abs(y);
            if(y == 0) {
                printf("YES\n");
            }
            else
            if(q%2 == 0) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}
