#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int x1,y1,x2,y2,x3,y3,x4,y4,d,flag;
    flag = 0;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1 == x2) {
        d = abs(y1-y2);
        x3 = x1 - d;
        if(x3 > 1000 || x3 < -1000) {
            x3 = x1 + d;
        }
        x4 = x3;
        y3 = y1;
        y4 = y2;
    }
    else
    if(y1 == y2) {
        d = abs(y1 - y2);
        y3 = y1 - d;
        if(y3 > 1000 || y3 < -1000) {
            y3 = y1 + d;
        }
        y4 = y3;
        x3 = x1;
        x4 = x2;
    }
    else {
        if((abs(x1)+abs(x2)) == (abs(y1)+abs(y2))) {
            x3 = x2;
            x4 = x1;
            y3 = y1;
            y4 = y2;
        }
        else {
            flag = 1;
        }
    }
    if(flag == 1) {
        printf("-1\n");
    }
    else {
        printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
    return 0;
}
