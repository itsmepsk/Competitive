#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int arr[1000],brr[1000],cur[1000],tab[1000];
int crr[500][500],pos[1000],top[1000];

int main() {
    int i,j,t,n,m,c,k,maxi,counter,tables,index;
    scanf("%d",&t);
    while(t--) {
        counter = 0;
        tables = 0;
        maxi = -1;
        memset(arr,0,sizeof(arr));
        memset(brr,0,sizeof(brr));
        memset(crr,0,sizeof(crr));
        memset(cur,0,sizeof(cur));
        memset(pos,0,sizeof(pos));
        memset(top,0,sizeof(top));
        memset(tab,0,sizeof(tab));
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++) {
            scanf("%d",&arr[i]);
            brr[arr[i]]++;
            crr[pos[arr[i]]++][arr[i]] = i;
        }
        k = 1;
        for(i=1;i<=m;i++) {
            if(tables < n) {
                if(cur[arr[i]] == 1) {
                    brr[arr[i]]--;
                }
                else {
                    counter++;
                    tables++;
                    cur[arr[i]] = 1;
                    tab[k++] = arr[i];
                }
            }
            else {
                if(cur[arr[i]] == 1) {
                    brr[arr[i]]--;
                }
                else {
                	maxi = -1;
                    for(j=1;j<k;j++) {
                        if(crr[top[tab[j]]][tab[j]] > maxi) {
                            maxi = crr[top[tab[j]]][tab[j]];
                            index = j;
                            if(maxi == 0) {
                            	break;
                            }
                        }
                        else
                        if(crr[top[tab[j]]][tab[j]] == 0) {
                            maxi = crr[top[tab[j]]][tab[j]];
                            index = j;
                            break;
                        }
                    }
                    tab[index] = arr[i];
                    cur[arr[maxi]] = 0;
                    counter++;
                    cur[arr[i]] = 1;
                    brr[arr[i]]--;
                }
            }
            top[arr[i]]++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
