#include <bits/stdc++.h>
using namespace std;

struct suffix {
    int index;
    string str;
};

void buildSuffixArray(string str,int len) {
    suffix SuffixArray[len];
    int i,j;
    for(i=0;i<len;i++) {
        for(j=i;j<len;j++) {
            SuffixArray[i].str = str.substr(i,j);
        }
    }
}

int main() {
    int t;
    string strin;
    scanf("%d",&t);
    while(t--) {
        cin >> strin;
        buildSuffixArray(strin,strin.length());
    }
}
