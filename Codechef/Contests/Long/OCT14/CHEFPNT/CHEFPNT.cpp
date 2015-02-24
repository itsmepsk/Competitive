#include <bits/stdc++.h>
using namespace std;

vector < pair <int ,int > > v1,v2,v;
vector < pair <int ,int > >::iterator it;
int x[3005],y[3005];
int arr[1005][105] = {0},brr[2][10005];

int main() {
    int n,m,k,i,j,flag,l,z;
    cin >> n >> m >> k;
    for(i=0;i<k;i++) {
        cin >> x[i] >> y[i];
        arr[x[i]][y[i]] = 1;
    }
    l = 0;

    for(i=1;i<=m;i++) {
        flag = 0;
        for(j=1;j<=n;j++) {
            if(arr[j][i] == 0 && flag == 0) {
                v1.push_back(make_pair(j,i));
                //brr[0][l] = j;
                //brr[1][l++] = i;
                flag = 1;
            }
            if(arr[j][i] == 1) {
                flag = 0;
            }
        }
    }

    for(i=1;i<=n;i++) {
        flag = 0;
        for(j=1;j<=m;j++) {
            if(arr[i][j] == 0 && flag == 0) {
                v2.push_back(make_pair(i,j));
                //brr[0][l] = j;
                //brr[1][l++] = i;
                flag = 1;
            }
            if(arr[i][j] == 1) {
                flag = 0;
            }
        }
    }
    //cout << l << endl;
    v = v1.size() < v2.size() ? v1:v2;
    z = v1.size() < v2.size() ? 1:0;
    cout << v.size() << endl;
    for(it=v.begin();it!=v.end();it++) {
        cout << it->first << " " << it->second << " " << z << endl;
    }
    /*
    for(i=0;i<l;i++) {
        cout << brr[0][i] << " " << brr[1][i] << " 1" << endl;
    }
    */
    return 0;
}
