#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
	int i,cap,under,l,error;
	char a[105];
	while(scanf("%s",&a) != EOF) {
		cap = 0;
		under = 0;
		error = 0;
		l = strlen(a);
		for(i=0;i<l;i++) {
			if(a[i] <= 'Z' && a[i] >= 'A') {
				cap = 1;
			}
			if(a[i] == '_') {
				under = 1;
				if(a[i+1] == '_' || a[i+1] == '\0') {
					error = 1;
				}
			}
			if(a[0] <= 'Z' && a[0] >= 'A' || a[0] == '_') {
				error = 1;
			}
		}
		if(cap == 1 && under == 1 || error == 1) {
			printf("Error!\n");
		}
		else
		if(cap == 1 && under == 0) {
			for(i=0;i<l;i++) {
				if(a[i] <= 'z' && a[i] >= 'a') {
					printf("%c",a[i]);
				}
				else
				if(a[i] <= 'Z' && a[i] >= 'A') {
					printf("_");
					printf("%c",a[i]+32);
				}
			}
			printf("\n");
		}
		else
		if(cap == 0 && under == 1) {
			for(i=0;a[i]!='\0';i++) {
				if(a[i] <= 'z' && a[i] >= 'a') {
					printf("%c",a[i]);
				}
				else
				if(a[i] == '_') {
					i++;
					printf("%c",a[i]-32);
				}
			}
			printf("\n");
		}
		else
		if(cap == 0 && under == 0) {
			puts(a);
		}
	}
	return 0;
}
