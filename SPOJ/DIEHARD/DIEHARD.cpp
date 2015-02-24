#include <bits/stdc++.h>
using namespace std;

int arr[1005][1005] = {0};

int rec(int h,int a,int flag,int counter) {
    if(h <= 0 || a <= 0) {
        return counter;
    }
    if(arr[h][a]) {
        return arr[h][a];
    }
    else
    if(flag) {
        arr[h][a] = rec(h+3,a+2,!flag,counter+1);
    }
    else {
        arr[h][a] = max(rec(h-5,a-10,!flag,counter+1),rec(h-20,a+5,!flag,counter+1));
    }
    return arr[h][a];
}

int main() {
    int t,h,a,i,j;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&h,&a);
        memset(arr,0,sizeof(arr));
        cout << rec(h,a,1,0) - 1 << endl;
    }
    return 0;
}
