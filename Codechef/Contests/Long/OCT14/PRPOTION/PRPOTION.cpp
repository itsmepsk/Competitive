#include <bits/stdc++.h>
using namespace std;

vector < long long int > ra,ga,ba,emp;
vector < long long int >:: iterator ri,gi,bi;

long long int maxi(long long int a,long long int b,long long int c) {
    return (a>b?a:b)>c?(a>b?a:b):c;
}

int main() {
    long long int t,r,g,b,m,i,x,ans;
    cin >> t;
    while(t--) {
        ra = emp;
        ga = emp;
        ba = emp;
        cin >> r >> g >> b >> m;
        for(i=0;i<r;i++) {
            cin >> x;
            ra.push_back(x);
        }
        for(i=0;i<g;i++) {
            cin >> x;
            ga.push_back(x);
        }
        for(i=0;i<b;i++) {
            cin >> x;
            ba.push_back(x);
        }
        /*
        sort(ra.rbegin(),ra.rend());
        sort(ga.rbegin(),ga.rend());
        sort(ba.rbegin(),ba.rend());
        */
        for(i=0;i<m;i++) {
            ri = max_element(ra.begin(),ra.end());
            gi = max_element(ga.begin(),ga.end());
            bi = max_element(ba.begin(),ba.end());
            if(*ri >= *gi && *ri >= *bi) {
                for(ri=ra.begin();ri!=ra.end();ri++) {
                    *ri = *ri/2;
                }
            }
            else
            if(*gi >= *ri && *gi >= *bi) {
                for(gi=ga.begin();gi!=ga.end();gi++) {
                    *gi = *gi/2;
                }
            }
            else
            if(*bi >= *ri && *bi >= *gi) {
                for(bi=ba.begin();bi!=ba.end();bi++) {
                    *bi = *bi/2;
                }
            }
        }
        ri = max_element(ra.begin(),ra.end());
        gi = max_element(ga.begin(),ga.end());
        bi = max_element(ba.begin(),ba.end());
        ans = maxi(*ri,*gi,*bi);
        cout << ans << endl;
    }
}
