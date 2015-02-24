#include <bits/stdc++.h>
using namespace std;

long long int arr[1000],brr[1000005],crr[1000005];

int main() {
    long long int n,p,i,j,k,q,r,s,sum,counter1,counter2,index,prev;
    scanf("%lld",&n);
    for(i=0;i<n;i++) {
        scanf("%lld",&arr[i]);
    }
    p = 0;
    r = 0;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            for(k=0;k<n;k++) {
                brr[p++] = arr[i]*arr[j] + arr[k];
                if(arr[i] != 0) {
                    crr[r++] = arr[i]*(arr[j] + arr[k]);
                }
            }
        }
    }
    sort(brr,brr+p);
    sort(crr,crr+r);
    i=0;
    j=0;
    sum = 0;
    counter1=0;
    counter2=0;
    while(i<p&&j<r)
    {
        if(brr[i]==crr[j])
        {
            k=brr[i];
            while(i<p&&k==brr[i])
            {
                counter1++;
                i++;
            }
            k=crr[j];
            while(j<r&&k==crr[j])
            {
                counter2++;
                j++;
            }
            sum+=(counter1*counter2);
            counter1=0;
            counter2=0;
        }
        else if(brr[i]<crr[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    printf("%lld\n",sum);
    return 0;
}
