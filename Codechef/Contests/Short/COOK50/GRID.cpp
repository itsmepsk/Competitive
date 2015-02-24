#include <bits/stdc++.h>
using namespace std;

int ver[1005][1005],hor[1005][1005];
char arr[1005][1005],temp[5];

int main() {
    int t,n,i,j,counter;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        memset(ver,0,sizeof(ver));
        memset(hor,0,sizeof(hor));
        gets(temp);
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                scanf("%c",&arr[i][j]);
            }
            gets(temp);
        }
        counter = 0;
        for(i=(n-1);i>=0;i--) {
            for(j=(n-1);j>=0;j--) {
                if(arr[i][j] == '.') {
                    if(hor[i][j+1] == 0 && ver[i+1][j] == 0) {
                        counter++;
                    }
                    if(hor[i][j+1] == 0) {
                        hor[i][j] = 0;
                    }
                    else {
                        hor[i][j] = -1;
                    }
                    if(ver[i+1][j] == 0) {
                        ver[i][j] = 0;
                    }
                    else {
                        ver[i][j] = -1;
                    }
                }
                else
                if(arr[i][j] == '#') {
                    hor[i][j] = -1;
                    ver[i][j] = -1;
                }
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}

