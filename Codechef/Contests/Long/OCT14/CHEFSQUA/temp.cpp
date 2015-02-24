#include <bits/stdc++.h>
using namespace std;

int arr[2][2005];
int xpos[2][5000005],ypos[2][5000005];

vector <pair <int ,int > > vx,vy;
vector <pair <int ,int > >::iterator it,jt,kt;

bool binarySearch(long long int c,long long int s,long long int e,vector <pair <int ,int > > vx) {
    kt = vx.begin();
    long long int mid;
    while(s <= e) {
        mid = (s+e)/2;
        if(c == (kt+mid)->second) {
            return true;
        }
        else
        if(c < (kt+mid)->second) {
            e = mid - 1;
        }
        else
        if(c > (kt+mid)->second) {
            s = mid + 1;
        }
    }
    return false;
}

int main() {
    long long int n,i,x,y,x1,y1,x2,y2,r1,r2,maxi,counter,a;
    double mx1,mx2,mx,my,my1,my2;
    cin >> n;
    memset(xpos,-1,sizeof(xpos));
    memset(ypos,-1,sizeof(ypos));
    for(i=0;i<n;i++) {
        cin >> arr[0][i] >> arr[1][i];
        vx.push_back(pair<int ,int >(arr[0][i],arr[1][i]));
        vy.push_back(pair<int ,int >(arr[1][i],arr[0][i]));
    }
    if(n == 0) {
    	maxi = 4;
    	cout << maxi << endl;
    	return 0;
    }
    if(n == 1) {
    	maxi == 3;
    	cout << maxi << endl;
    	return 0;
    }
    else
    if(n == 2) {
    	maxi = 2;
    	cout << maxi << endl;
    	return 0;
    }
    sort(vx.begin(),vx.end());
    vx.erase(unique(vx.begin(), vx.end()), vx.end());
    sort(vy.begin(),vy.end());
    vy.erase(unique(vy.begin(), vy.end()), vy.end());
    a = get<0>(vx[0]);
    xpos[0][a + 3000000] = 0;
    n = vx.size();
    for(i=1;i<n;i++) {
        if(get<0>(vx[i]) != get<0>(vx[i-1])) {
            xpos[1][get<0>(vx[i-1]) + 3000000] = i-1;
            xpos[0][get<0>(vx[i]) + 3000000] = i;
        }
    }
    a = get<0>(vx[n-1]);
    xpos[1][a + 3000000] = n-1;
    a = get<0>(vy[0]);
    ypos[0][a + 3000000] = 0;
    for(i=1;i<n;i++) {
        if(get<0>(vy[i]) != get<0>(vy[i-1])) {
            ypos[1][get<0>(vy[i-1]) + 3000000] = i-1;
            ypos[0][get<0>(vy[i]) + 3000000] = i;
        }
    }
    a = get<0>(vy[n-1]);
    ypos[1][a + 3000000] = n-1;
    maxi = 3;
    for(it=vx.begin();it!=vx.end();it++) {
        for(jt=it+1;jt!=vx.end();jt++) {
            if(it->first == jt->first) {
                mx1 = it->first + abs((it->second - jt->second)/2.0);
                mx2 = it->first - abs((it->second - jt->second)/2.0);
                my = (it->second + jt->second)/2.0;
                x1 = mx1 + abs((it->second - jt->second)/2.0);
                x2 = mx2 - abs((it->second - jt->second)/2.0);
                if(xpos[0][x1 + 3000000] != -1) {
                    y1 = my + abs((it->second - jt->second)/2.0);
                    r1 = binarySearch(y1,xpos[0][x1 + 3000000],xpos[1][x1 + 3000000],vx);
                    y2 = my - abs((it->second - jt->second)/2.0);
                    r2 = binarySearch(y2,xpos[0][x1 + 3000000],xpos[1][x1 + 3000000],vx);
                    counter = 2 - r1 - r2;
                }
                else {
                    counter = 2;
                }
                if(counter < maxi) {
                    maxi = counter;
                }
                if(xpos[0][x2 + 3000000] != -1) {
                    y1 = my + abs((it->second - jt->second)/2.0);
                    r1 = binarySearch(y1,xpos[0][x2 + 3000000],xpos[1][x2 + 3000000],vx);
                    y2 = my - abs((it->second - jt->second)/2.0);
                    r2 = binarySearch(y2,xpos[0][x2 + 3000000],xpos[1][x2 + 3000000],vx);
                    counter = 2 - r1 - r2;
                }
                else {
                    counter = 2;
                }
                if(counter < maxi) {
                    maxi = counter;
                }
            }
            else
            if(it->second == jt->second) {
            	mx = (it->first + jt->first)/2.0;
            	my1 = it->second + abs((it->first - jt->first)/2.0);
            	my2 = it->second - abs((it->first - jt->first)/2.0);
            	y1 = my1 + abs((it->first - jt->first)/2.0);
            	y2 = my2 - abs((it->first - jt->first)/2.0);
            	if(ypos[0][y1 + 3000000] != -1) {
            		x1 = mx + abs((it->first - jt->first)/2.0);
            		r1 = binarySearch(x1,ypos[0][y1 + 3000000],ypos[1][y1 + 3000000],vy);
            		x2 = mx - abs((it->first - jt->first)/2.0);
            		r2 = binarySearch(x2,ypos[0][y1 + 3000000],ypos[1][y1 + 3000000],vy);
            		counter = 2 - r1 - r2;
            	}
            	else {
            		counter = 2;
            	}
            	if(counter < maxi) {
            		maxi = counter;
            	}
            	if(ypos[0][y2 + 3000000] != -1) {
            		x1 = mx + abs((it->first - jt->first)/2.0);
            		r1 = binarySearch(x1,ypos[0][y2 + 3000000],ypos[1][y2 + 3000000],vy);
            		x2 = mx - abs((it->first - jt->first)/2.0);
            		r2 = binarySearch(x2,ypos[0][y2 + 3000000],ypos[1][y2 + 3000000],vy);
            		counter = 2 - r1 - r2;
            	}
            	else {
            		counter = 2;
            	}
            	if(counter < maxi) {
            		maxi = counter;
            	}
            }
            else {
            	mx1 = it->first;
            	my1 = jt->second;
            	x1 = mx1 + abs((it->first - jt->first));
            	if(x1 == it->first || x1 == jt->first) {
            		x1 = mx1 - abs((it->first - jt->first));
            	}
            	y1 = my1;
            	x2 = mx1;
            	y2 = my1 - abs((it->first - jt->first));
            	if(y2 == it->second || y2 == jt->second) {
            		y2 = my1 + abs((it->first - jt->first));
            	}
            	r1 = 0;
            	if(xpos[0][x1 + 3000000] != -1) {
            		r1 = binarySearch(y1,xpos[0][x1 + 3000000],xpos[1][x1 + 3000000],vx);
            	}
            	r2 = 0;
            	if(xpos[0][x2 + 3000000] != -1) {
            		r2 = binarySearch(y2,xpos[0][x2 + 3000000],xpos[1][x2 + 3000000],vx);
            	}
            	counter = 2 - r1 - r2;
            	if(counter < maxi) {
            		maxi = counter;
            	}
            	mx2 = jt->first;
            	my2 = it->second;
            	x1 = mx2 + abs((it->first - jt->first));
            	if(x1 == it->first || x1 == jt->first) {
            		x1 = mx2 - abs((it->first - jt->first));
            	}
            	y1 = my2;
            	x2 = mx2;
            	y2 = my2 + abs((it->first - jt->first));
            	if(y2 == it->second || y2 == jt->second) {
            		y2 = my2 - abs((it->first - jt->first));
            	}
            	r1 = 0;
            	if(xpos[0][x1 + 3000000] != -1) {
            		r1 = binarySearch(y1,xpos[0][x1 + 3000000],xpos[1][x1 + 3000000],vx);
            	}
            	r2 = 0;
            	if(xpos[0][x2 + 3000000] != -1) {
            		r2 = binarySearch(y2,xpos[0][x2 + 3000000],xpos[1][x2 + 3000000],vx);
            	}
            	counter = 2 - r1 - r2;
            	if(counter < maxi) {
            		maxi = counter;
            	}
             }
        }
    }
    cout << maxi << endl;
    return 0;
}
