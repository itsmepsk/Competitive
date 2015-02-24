#include <bits/stdc++.h>
using namespace std;

vector < pair < long long int ,int > > v1,v2;
vector < pair < long long int ,int > >::iterator it,jt;
vector < vector < int > > v;

int main() {
    long long int n,k,i,j,x,mini;
    cin >> n >> k;
    for(i=0;i<n;i++) {
        cin >> x;
        v1.push_back(pair< long long int , int >(x,0));

    }
    v2 = v1;
    sort(v2.begin(),v2.end());
    for(it=v2.begin();it!=v2.end();it++) {

    }
}
