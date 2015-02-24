#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int arr[405],cur[405],tab[205];
int crr[405][405],pos[405];

int main() {
    int i,j,t,n,m,k,maxi,counter,tables,index;
    scanf("%d",&t);
    while(t--) {
        counter = 0;
        tables = 0;
        maxi = -1;
        memset(arr,0,sizeof(arr));
        memset(crr,0,sizeof(crr));
        memset(cur,0,sizeof(cur));
        memset(pos,0,sizeof(pos));
        memset(tab,0,sizeof(tab));
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++) {
            scanf("%d",&arr[i]);
            crr[pos[arr[i]]++][arr[i]] = i;
        }
        memset(pos,0,sizeof(pos));
        k = 1;
        for(i=1;i<=m;i++) {
            if(tables < n) {
                if(cur[arr[i]] != 1) {
                    counter++;
                    tables++;
                    cur[arr[i]] = 1;
                    tab[k++] = arr[i];
                }
            }
            else {
                if(cur[arr[i]] != 1) {
                	maxi = -1;
                    for(j=1;j<k;j++) {
                        if(crr[pos[tab[j]]][tab[j]] > maxi) {
                            maxi = crr[pos[tab[j]]][tab[j]];
                            index = j;
                            if(maxi == 0) {
                            	break;
                            }
                        }
                        else
                        if(crr[pos[tab[j]]][tab[j]] == 0) {
                            maxi = crr[pos[tab[j]]][tab[j]];
                            index = j;
                            break;
                        }
                    }
                    tab[index] = arr[i];
                    cur[arr[maxi]] = 0;
                    counter++;
                    cur[arr[i]] = 1;
                }
            }
            pos[arr[i]]++;
        }
        printf("%d\n",counter);
    }
    return 0;
}
