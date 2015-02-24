#include <bits/stdc++.h>
using namespace std;

vector < pair < char,char> > v1;

int arr[6][6] = {0},flag = 0;

void print() {
	long long int i,j;
	for(i=1;i<=5;i++) {
            for(j=1;j<=5;j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    cout << endl;
}

long long int func(long long int p,long long int q) {
	long long int e;
	for(e=1;e<=5;e++) {
		if(arr[p][e] == 1) {
			if(arr[q][e] == 1) {
				flag = 1;
			}
			else {
				arr[q][e] = 1;
			}	
			print();		
			return e;
		}
	}
}


int main() {
    long long int t,n,i,m,j,k,l,index;
    char x,y;
    string str1,str2,ch;
    cin >> t;
    while(t--) {
        cin >> str1 >> str2;
        cin >> m;
        for(i=0;i<m;i++) {
            cin >> ch;
            x = ch[0];
            y = ch[3];
            v1.push_back(pair < char ,char >(x,y));
            arr[x-'a'+1][y-'a'+1] = 1;
        
		}
		print();		
        
		m = 1;
        for(i=5;i>=1;i--) {
            for(j=m;j<=5;j++) {
                if(arr[i][j] == 1) {
                	l = func(j,i);
                	m = l;
                	if(flag == 1) {
                		flag = 0;
                		break;
                	}
                }
            }
        }
        for(i=1;i<=5;i++) {
            for(j=1;j<=5;j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

