#include <stdio.h>

int main()
{
    int t,c,num1,num2;
    scanf("%d",&t);
    for(c=0;c<t;c++)
    {
        scanf("%d %d",&num1,&num2);
        printf("%d %d\n",num1>num2?num1:num2,num1+num2);
    }
}
