#include <stdio.h>
#include <string.h>

int main() {
	int t,p,q,i,count;
	int smalla[27],smallb[27],capsa[27],capsb[27];
	char a[200],b[200],temp[5];
	scanf("%d",&t);
	gets(temp);
	while(t--) {
		gets(a);
		gets(b);
		p = strlen(a);
		q = strlen(b);
		for(i=0;i<27;i++) {
			smalla[i] = 0;
			smallb[i] = 0;
			capsa[i] = 0;
			capsb[i] = 0;
		}
		for(i=0;i<p;i++) {
			if(a[i] >= 'a' && a[i] <= 'z') {
				smalla[a[i] - 'a' + 1]++;
			}
			if(a[i] >= 'A' && a[i] <= 'Z') {
				capsa[a[i] - 'A' + 1]++;
			}
		}
		for(i=0;i<q;i++) {
			if(b[i] >= 'a' && b[i] <= 'z') {
				smallb[b[i] - 'a' + 1]++;
			}
			if(b[i] >= 'A' && b[i] <= 'Z') {
				capsb[b[i] - 'A' + 1]++;
			}
		}
		count = 0;
		for(i=1;i<=26;i++) {
			if(smallb[i] != 0) {
				if(smalla[i] != 0) {
					count = count + smallb[i];
				}
			}
			if(capsb[i] != 0) {
				if(capsa[i] != 0) {
					count = count + capsb[i];
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
