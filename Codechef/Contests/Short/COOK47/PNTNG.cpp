#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

long long int t[100005],c[100005],arr[100005],brr[100005];

void quicksort(long long int ,long long int );

int main() {
    long long int bal,flag,sign,sum2,carry,q,k,p,i,j,n,m,h,sum = 0,cost = 0,temp;
    memset(arr,0,sizeof(arr));
    memset(brr,0,sizeof(brr));
    cin >> n >> m >> h;
    for(i=0;i<h;i++) {
        cin >> t[i] >> c[i];
        sum = sum + t[i];
    }
    quicksort(0,h-1);
    if(n*m > sum) {
        cout << "Impossible";
    }
    else {
        q = 0;
        sign = 0;
        bal = n*m;
        sum2 = 0;
        for(i=0;bal != 0 && i < h;i++) {
            if(bal < t[i]) {
                cost = (bal)*c[i];
                sign = sign + bal;
            }
            else {
                cost = (t[i])*c[i];
                sign = sign + t[i];
            }
            bal = n*m - sign;
            sum2 = sum2 + cost;
        }
        cout << sum2 << endl;
    }
    return 0;
}

void quicksort(long long int first,long long int last){
    long long int pivot,j,temp1,temp2,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(c[i]<=c[pivot]&&i<last)
                 i++;
             while(c[j]>c[pivot])
                 j--;
             if(i<j){
                 temp1=c[i];
                 temp2 = t[i];
                  c[i] = c[j];
                  t[i] = t[j];
                  c[j] = temp1;
                  t[j] = temp2;
             }
         }

         temp1 = c[pivot];
         temp2 = t[pivot];
         c[pivot]=c[j];
         t[pivot] = t[j];
         c[j] = temp1;
         t[j] = temp2;
         quicksort(first,j-1);
         quicksort(j+1,last);

    }
}
