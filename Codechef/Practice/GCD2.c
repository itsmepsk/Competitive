#include <stdio.h>
#include <string.h>

int gcd(int p,int q) {
	if(q == 0) {
		return p;
	}
	else {
		return gcd(q,p%q);
	}
}

int main() {
	int t,a,l,i,j,cur,temp,ans,b[300] = {0};
	char c[300] = {'0'},v;
	scanf("%d",&t);
	while(t--) {
		scanf("%d",&a);
		v = getchar();
		gets(c);
		if(a == 0) {
			puts(c);
		}
		else {
			l = strlen(c);
			temp = 0;
			j = 0;
			for(i=0;i<l;i++) {
				b[i] = c[i] - '0';
				cur = temp*10 + b[i];
				temp = cur % a;
			}
			ans = gcd(a,temp);
			printf("%d\n",ans);
		}
	}
	return 0;
}
