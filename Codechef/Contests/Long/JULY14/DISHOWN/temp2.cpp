#include <stdio.h>

long long int brr[10005] = {0},arr[10005] = {0},crr[10005] = {0},drr[10005] = {0};

int main() {
    long long int i,j,t,n,q,p,x,y,mi,ma,pa,pb,a,b,counter;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        for(i=1;i<=n;i++) {
            scanf("%lld",&arr[i]);
            brr[i] = 0;
            crr[i] = 0;
            drr[i] = 0;
        }
        counter = 1;
        scanf("%lld",&q);
        for(j=0;j<q;j++) {
            scanf("%lld",&p);
            if(p == 0) {
                scanf("%lld %lld",&x,&y);
                if((crr[brr[x]] == crr[brr[y]] && brr[x] != 0 && brr[y] != 0) || (x == y)) {
                    printf("Invalid query!\n");
                }
                else {
                    if(drr[x] == -1 && drr[y] != 1) {
                        brr[y] = counter;
                        crr[counter] = y;
                        counter++;
                    }
                    else
                    if(drr[x] != -1 && drr[y] == 1) {
                        brr[x] = counter;
                        crr[counter] = x;
                        counter++;
                    }
                    else
                    if(drr[x] != -1 && drr[y] != -1) {
                        pa = (brr[x]==0?arr[x]:arr[crr[brr[x]]]);
                        pb = (brr[y]==0?arr[y]:arr[crr[brr[y]]]);
                        if(pa != pb) {
                            ma = pa > pb ? x : y;
                            mi = pa < pb ? x : y;
                            if(brr[x] == 0 && brr[y] == 0) {
                                brr[x] = counter;
                                brr[y] = counter;
                                crr[counter] = ma;
                                drr[mi] = -1;
                                counter++;
                            }
                            else {
                                if(brr[mi] == 0) {
                                    brr[mi] = brr[ma];
                                    drr[mi] = -1;
                                }
                                else
                                if(brr[ma] == 0) {
                                    brr[ma] = counter;
                                    crr[counter] = ma;
                                    crr[brr[mi]] = ma;
                                    drr[mi] = -1;
                                    counter++;
                                }
                                else
                                if(brr[ma] != 0 && brr[mi] != 0) {
                                    crr[brr[mi]] = crr[brr[ma]];
                                    drr[mi] = -1;
                                }
                            }
                        }
                    }
                }
            }
            else {
                scanf("%lld",&x);
                if(brr[x] != 0) {
                    printf("%lld\n",crr[brr[x]]);
                }
                else {
                    printf("%lld\n",x);
                }
            }
        }
    }
    return 0;
}

