#include <stdio.h>
int arr[10][10] = {{0},{1},{1,2,4,8,6},{1,3,9,7,1},{1,4,6},{1,5},
			   	   {1,6},{1,7,9,3,1,},{1,8,4,2,6,},{1,9,1}};
int main()
{
	int t,c,a,d,x,y,z;
	unsigned long long int b;
	scanf("%d",&t);
	for(c=0;c<t;c++)
	{	scanf("%d %llu",&a,&b);
		x=a%10;
		if(x== 4||x==9)
		{y=2;z=b%y;
			if(z==0)
			{if(b!=0){z=2;}}
			d=arr[x][z];
			printf("%d\n",d);
		}
		if(x==2||x==3||x==7||x==8)
		{y=4;z=b%y;
			if(z==0)
			{if(b!=0){z=4;}}
			d=arr[x][z];
			printf("%d\n",d);}
		if(x==5||x==6||x==1||x==0)
		{if(x==5||x==6)
			b!=0?printf("%d\n",x):printf("1\n");
			if(x==0||x==1)
			printf("%d\n",x);}
	}
	return 0;
}
