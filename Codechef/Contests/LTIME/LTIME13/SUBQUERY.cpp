#include <iostream>
#include <cstring>

using namespace std;

int main() {
    long long int n,l,p,brr[200005],flag,sum,i,q,j,count,k,m;
    char s[200005],c[200005];
    cin >> s;
    q = strlen(s);
    cin >> n;
    while(n--) {
        cin >> l >> p;
        sum = 0;
        char arr[l+2][q-l+2];
        //memset(arr,0,sizeof(arr));
        for(i=0;i<q;i++) {
            m = 0;
            for(j=i;j<i+l;j++) {
                c[m++] = s[j];
            }
            c[m] = '\0';
            flag = 0;
            for(k=0;k<i;k++) {
                if(strcmp(arr[k],c) == 0) {
                    brr[k]++;
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                strcpy(arr[i],c);
                brr[i]++;
            }
        }
        count = 0;
        for(i=0;i<200005;i++) {
            if(brr[i] == p) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
