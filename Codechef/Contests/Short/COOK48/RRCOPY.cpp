#include <stdio.h>

int main() {
    int t,n,i,counter,p,arr[100005];
    scanf("%d",&t);
    while(t--) {
        for(i=0;i<100005;i++) {
            arr[i] = 0;
        }
        scanf("%d",&n);
        counter = 0;
        for(i=1;i<=n;i++) {
            scanf("%d",&p);
            if(arr[p] == 0) {
                counter++;
                arr[p]++;
            }
        }
        printf("%d\n",counter);
    }
    return 0;
}
