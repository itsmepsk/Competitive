#include <bits/stdc++.h>
#define _ std::ios_base::Init i; std::ios_base::sync_with_stdio(false); std::cin.tie(0);

using namespace std;

int main() {
	long long int n, k, p;
	cin >> n>> k>> p;

	long long int brr[100005], num;
	vector<pair<long long int, long long int> > arr;
	for(long long int i=0;i<n;i++){
	 cin >> num;
	 arr.push_back(make_pair(num, i+1));
	}
	sort(arr.begin(), arr.end());
	long long int last = -k-1;
	long long int var = -1;
	for(auto &i:arr){
		if(i.first-last<=k)
		 brr[i.second] = var;
		else
			brr[i.second]=var=i.second;
		last = i.first;
	}
	long long int a,b;
	while(p--){
		cin >> a >> b;
		if(brr[a]==brr[b]) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
