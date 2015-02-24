#include <bits/stdc++.h>
using namespace std;
 
vector < pair < int , int > > arr,brr; 
vector < pair < int , int > >::iterator it,jt;
set < pair < int, int > > crr;
 

int main() {	
	int n,i,a,b,maxi,counter,j,r1,r2,x3,x4,y3,y4;
	double xc,xd,yc,yd,mx3,mx4,my3,my4;
	cin >> n;
	for(i=0;i<n;i++) {	
		cin >> a >> b;
		arr.push_back(pair <long long int ,long long int >(a,b));
	}
	for(auto it : arr) {
		crr.insert(it);
	}
		
	maxi = 4;
	if(n==0) {
		maxi=4;
	}
	else		
	if(n==1) {
		maxi=3;
	}
	else
	if(n==2) {
		maxi=2;
	}
	else {
		for(it=arr.begin();it!=arr.end();it++) {
			for(jt=it+1;jt!=arr.end();jt++) {
				xc = (double)(it->first + jt->first)/2;  
				yc = (double)(it->second + jt->second)/2;
				xd = (double)(it->first - jt->first)/2;  
				yd = (double)(it->second - jt->second)/2;
				 
				mx3= xc - yd;
				if((double)(int)mx3==mx3) {
					x3 = (int)(mx3);
				}	
				else {
					x3=500000;
				}
					
				my3= yc + xd;
				if((double)(int)my3==my3) {
					y3 = (int)(my3);
				}	
				else {
					y3=5000000;
				}
												
				mx4 = xc + yd; 
				if((double)(int)mx4==mx4) {
					x4 = (int)mx4;
				}
				else {
					x4=5000000;
				}
					
				my4 = yc - xd;
				if((double)(int)my4==my4) {
					y4 = (int)(my4);
				}
				else {
					y4=5000000;
				}
				
				auto p=make_pair(x3,y3);
				auto q=make_pair(x4,y4);
				r1 = 0;
				r2 = 0;
				if(crr.find(p)!=crr.end()) {
					r1 = 1;
				}	
				if(crr.find(q)!=crr.end()) {
					r2 = 1;
				}
				counter = 2 - (r1 + r2);	
				if(counter < maxi) {
					maxi = counter;
				}	
			}
		}
	}	
	cout << maxi << endl;
	return 0;
}
  
