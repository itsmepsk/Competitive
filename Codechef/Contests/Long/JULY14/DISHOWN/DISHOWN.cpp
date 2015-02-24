#include <stdio.h>

long long int brr[10005] = {0},arr[10005] = {0},crr[10005] = {0};

int main() {
    long long int i,j,t,n,q,p,x,y,mi,ma,pa,pb,a,b,counter,temp;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&n);
        for(i=1;i<=n;i++) {
            scanf("%lld",&arr[i]);
            brr[i] = 0;
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
                    pa = (brr[x]==0?arr[x]:arr[crr[brr[x]]]);
                    a = (brr[x] == 0 ? x : crr[brr[x]]);
                    pb = (brr[y]==0?arr[y]:arr[crr[brr[y]]]);
                    b = (brr[y] == 0 ? y : crr[brr[y]]);
                    if(pa != pb) {
                    	ma = pa > pb ? a : b;
	                    mi = pa < pb ? a : b;
	                    if(brr[x] == 0 && brr[y] == 0) {
	                        brr[x] = counter;
	                        brr[y] = counter;
	                        crr[counter] = ma;
	                        counter++;
	                    }
	                    else {
	                        if(brr[mi] == 0) {
	                            brr[mi] = brr[ma];
	                        }
	                        else
	                        if(brr[ma] == 0) {
                                temp = crr[brr[mi]];
                                for(i=1;i<=counter;i++) {
                                    if(crr[i] == temp) {
                                        crr[i] = ma;
                                    }
                                }
	                            brr[ma] = brr[mi];

	                            //crr[brr[mi]] = ma;
	                            //counter++;
	                        }
	                        else
	                        if(brr[ma] != 0 && brr[mi] != 0) {
                                temp = crr[brr[mi]];
                                for(i=1;i<=counter;i++) {
                                    if(crr[i] == temp) {
                                        crr[i] = ma;
                                    }
                                }
	                            //crr[brr[mi]] = crr[brr[ma]];
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

