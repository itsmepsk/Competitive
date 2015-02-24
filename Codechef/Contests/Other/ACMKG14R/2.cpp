#include <bits/stdc++.h>
using namespace std;

vector < pair < char,char> > v1,v2;
vector < pair < char> > m1.m2;

char arr[2][100005] = {0};
int crr[27] = {0};
int index[27] = {0};

int main() {
    long long int t,n,i,m,a,b;
    char x,y;
    string str1,str2;
    cin >> t;
    while(t--) {
        cin >> str1 >> str2;
        cin >> m;
        while(i=0;i<m;i++) {
            scanf("%c->%c",&x,&y);
            v1.push_back(pair < char ,char >(x,y));
            crr[index[x-'a'+1]][x-'a'+1] = y-'a'+1;
            index[x-'a'+1]++;
        }
        for(i=0;i<m;i++) {
            a = str1[i] - 'a' + 1;
            b = str2[i] - 'a' + 1;
        }
    }
    return 0;
}


