#include <stdio.h>
#include <math.h>


int main() {
	long long int t,i,u,v,w,U,V,W,a,b,c,d,X,x,Y,y,Z,z,arr[6];
	double vol;
	scanf("%lld",&t);
	while(t--) {
		for(i=0;i<6;i++) {
			scanf("%lld",&arr[i]);
		}
		u = arr[2];
		v = arr[1];
		w = arr[0];
		U = arr[3];
		V = arr[4];
		W = arr[5];
		X = (w-U+v)*(U+v+w);
		x = (U-v+w)*(v-w+U);
		Y = (u-V+w)*(V+u+w);
		y = (V-w+u)*(w-u+V);
		Z = (v-W+u)*(W+v+u);
		z = (W-u+v)*(u-v+W);
		a = sqrt(x*Y*Z);
	    b = sqrt(y*Z*X);
		c = sqrt(z*X*Y);
		d = sqrt(x*y*z);
		vol = (double)sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d))*(double)sqrt((a+b+c-d));
		vol = (double)vol/(192*u*v*w);
		printf("%.4lf\n",vol);
	}
	return 0;
}
