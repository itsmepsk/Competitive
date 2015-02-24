#include <stdio.h>
#include <math.h>

char arr[2005][2005],temp2[5];
int brr[2005][2005];
long long int crr[2005][2005],temp;

int main() {
    int n,i=0,j,p,r,k,count = 0,step = 0;
    scanf("%d",&n);
    gets(temp2);
    for(i=0;i<n;i++) {
        gets(arr[i]);
    }
    for(j=0;j<n;j++) {
    	p = 0;
    	step = 0;
        for(i=0;i<n;i++) {
            count = 0;
            temp = 0;
            k = 0;
            while(count != 32 && i != n) {
                temp = temp + (arr[j][i]-'0')*pow(2,k);
                k++;
                i++;
                count++;
            }
            step++;
            r = step;
            crr[j][p++] = temp;
            i--;
            k = 0;
            temp = 0;
        }
    }
    /*
    for(i=0;i<n;i++) {
        for(j=0;j<step;j++) {
            printf("%lld ",crr[i][j]);
        }
        printf("\n");
    }
    */
    count = 0;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            for(k=0;k<r;k++) {
                if(arr[i][j] != '1' && arr[j][i] != '1') {
                    if(((crr[i][k] & crr[j][k] )!= 0)) {
                        count+=2;
                    }
                }
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
