#include <iostream>
#include <stdio.h>
#include <tuple>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <cstring>
using namespace std;

int arr[200005][3],pos[100005] = {-1},vis[100005] = {0},num[100005] = {0},flip[100005] = {0};
vector <tuple <int ,int ,int >> s;
int maxi = 100005,counter = 0,m;
int main() {
    int n,m,a,b,i,j;
    vector <tuple <int ,int >> p,q,r;
    cin >> n >> m;
    for(i=0;i<m;i++) {
        scanf("%d %d",&a,&b);
        p.insert(p.begin()+i,tuple<int ,int>(a,b));
        r.insert(r.begin()+i,tuple<int ,int>(b,a));
    }
    q = p;
    sort(q.begin(),q.end());
    sort(r.begin(),r.end());
    memset(pos,-1,sizeof(pos));
    for(i=0;i<m;i++) {
        s.insert(s.begin()+i,tuple<int ,int ,int >(get<0>(q[i]),get<1>(q[i]),1));
    }
    for(i=m;i<2*m;i++) {
        s.insert(s.begin()+i,tuple<int ,int ,int >(get<0>(r[i-m]),get<1>(r[i-m]),2));
    }
    sort(s.begin(),s.end());
    for(i=0;i<2*m;i++) {
        arr[i][0] = get<0>(s[i]);
        arr[i][1] = get<1>(s[i]);
        arr[i][2] = get<2>(s[i]);
        if(pos[arr[i][0]] == -1) {
            pos[arr[i][0]] = i;
        }
        num[arr[i][0]]++;
        flip[i] = 100005;
    }
    flip[i] = 100005;
    queue<int> P,Q;
    P.push(1);
    int check = 1;
    a = 0;
    int top = 1;
    vis[1] = 1;
    flip[1] = 0;
    i = 0;
	while(i < 2*m) {
		//if(vis[arr[pos[top]][0]] == 0) {
            while(!P.empty()) {
            	int f = num[arr[pos[top]][0]];
                for(j=0;j<num[arr[pos[top]][0]];j++) {
                	int temp = arr[pos[arr[pos[top]][0]]+j][1];
                	if(vis[arr[pos[arr[pos[top]][0]]+j][1]] == 0) {
                		Q.push(arr[pos[arr[pos[top]][0]]+j][1]);
                		if(arr[pos[arr[pos[top]][0]]+j][2] == 2) {
                			int tem = arr[pos[arr[pos[top]][0]]+j][0] + 1;
                			if(tem < flip[arr[pos[arr[pos[top]][0]]+j][1]]) {
                				flip[arr[pos[arr[pos[top]][0]]+j][1]] = flip[arr[pos[arr[pos[top]][0]]+j][0]] + 1;
                			}
                		}
                		else {
                			flip[arr[pos[arr[pos[top]][0]]+j][1]] = flip[arr[pos[arr[pos[top]][0]]+j][0]];
                		}
                	}
                }
                vis[P.front()] = 1;
                a = Q.back();
                P.pop();
                top = Q.front();
                i++;
            }
            while(!Q.empty()) {
            	int f = num[arr[pos[top]][0]];
                for(j=0;j<num[arr[pos[top]][0]];j++) {
                	int temp = arr[pos[arr[pos[top]][0]]+j][1];
                	if(vis[arr[pos[arr[pos[top]][0]]+j][1]] == 0) {
                		P.push(arr[pos[arr[pos[top]][0]]+j][1]);
                		if(arr[pos[arr[pos[top]][0]]+j][2] == 2) {
                			int tem = arr[pos[arr[pos[top]][0]]+j][0] + 1;
                			if(tem < flip[arr[pos[arr[pos[top]][0]]+j][1]]) {
                				flip[arr[pos[arr[pos[top]][0]]+j][1]] = flip[arr[pos[arr[pos[top]][0]]+j][0]] + 1;
                			}
                		}
                		else {
                			flip[arr[pos[arr[pos[top]][0]]+j][1]] = flip[arr[pos[arr[pos[top]][0]]+j][0]];
                		}
                	}
                }
                vis[Q.front()] = 1;
                a = P.back();
                Q.pop();
                top = P.front();
                i++;
            }
	}
	cout << flip[n];
}
