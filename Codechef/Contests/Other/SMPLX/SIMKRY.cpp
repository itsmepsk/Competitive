#include <bits/stdc++.h>
using namespace std;

vector <long long int > brr,v;

long long int binarySearch(long long int l,long long int u,long long int m) {
    long long int mid;
    while(l<=u){
             mid=(l+u)/2;
             if(m==brr[mid]){
                 return mid;
             }
             else if(m<brr[mid]){
                 u=mid-1;
             }
             else
                 l=mid+1;
        }
        return -1;
}

int main()
{
	long long int t,n,m,i,j,b,pro,flag,c,d;
	flag = 0;
		long long arr[100125] = {0};
		m = 2;
		n = 100005;
		pro = 1;
		if(m<=2)
		{
			i = 3;
		}
		else
		{
			i = m;
		}
		for(;i<=n;i++)
		{
			if(i%2 == 0)
			{
				b = i-m+1;
				arr[b] = 1;
			}
		}
		for(i=3;i*i<=n;i=i+2)
		{
			if(i<m)
			{
				j = (((m-1)/i)+1)*i;
			}
			else
			{
				j = i*i;
			}
			for(;j<=n;j=j+i)
			{
				arr[j-m+1] = 1;
			}
		}
		for(i=m;i<=n;i++)
		{
			if(arr[i-m+1] == 0)
			{
				if(i!=1) {
                    //flag = 1;
                    brr.push_back(i);
				}

			}
		}
    scanf("%lld",&t);
	while(t--)
	{
	    scanf("%lld %lld",&m,&n);

	    //cout << endl;
	    c = binarySearch(0,sizeof(brr),m);
	    d = binarySearch(0,sizeof(brr),n);
        /*
	    cout << endl;
	    cout << c << endl;
	    cout << d << endl;
	    cout << endl;
        */
	    if(c==-1) {
            c = upper_bound(brr.begin(),brr.end(),m)-brr.begin();
            //cout << c << endl;
        }
	    if(d==-1) {
            d = lower_bound(brr.begin(),brr.end(),n)-brr.begin();
            //cout << d << endl;
	    }
        /*
	    cout << endl;
	    cout << c << endl;
	    cout << d << endl;
	    cout << endl;
        cout << brr[d] << " " << brr[c] << endl;
        */
		if(c == d) {
            cout << "1" << endl;
		}
		else {
            pro = 1;
            for(i=c;i<=d;i++) {
                pro = pro*brr[i];
                if(pro >= 1000000009) {
                    pro = pro%1000000009;
                }
            }
            cout << pro << endl;
		}

	}
	return 0;
}
