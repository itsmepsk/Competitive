#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(char a[],char b[])
{
	if(strlen(a) > strlen(b))
	{
		return strlen(a);
	}
	else
	{
		return strlen(b);
	}
}

int main()
{
	int t,c,i,j,fi,se,th,*a1,*a2,*ch,maxi,id;
	char a[501],temp[5],op,f[501],s[501],te[501],current;
	scanf("%d",&t);
	gets(temp);
	for(c=0;c<t;c++)
	{
		int m = 0,n = 0;
		int p = 0;
		op = '\0';
		int semi = 0,tem = 0;
		gets(a);
		for(i=0;i<1050;i++)
		{
			if(i<501)
			{
				f[i] = '\0';
				s[i] = '\0';
			}
			if(i<1050)
			{
				te[i] = '\0';
			}
		}
		for(i=0;i<strlen(a);i++)
		{
			if(a[i] == '+' || a[i] == '-' || a[i] == '*')
			{
				f[i] = '\0';
				op = a[i++];
			}
			if(op == '\0')
			{
				if(a[i] != '+' || a[i] != '-' || a[i] != '*')
				{
					f[m++] = a[i];
				}
			}
			if(op != '\0')
			{
				s[n++] = a[i];
			}
		}
		s[--i] = '\0';
		fi = strlen(f);
		se = strlen(s);
		maxi = max(f,s);
		
				if(strlen(f) > strlen(s))
				{
					th = strlen(te);
					puts(f);
					for(i=0;i<(strlen(f) - strlen(s) - 1);i++)
					{
						printf(" ");
					}
					putchar(op);
					puts(s);
				}
				else
				if(strlen(f) < strlen(s))
				{
					for(i=0;i<(strlen(s) - strlen(f) + 1);i++)
					{
						putchar(' ');
					}
					puts(f);
					putchar(op);
					puts(s);
				}
				else
				if(strlen(f) == strlen(s))
				{
					putchar(' ');
					puts(f);
					putchar(op);
					puts(s);
				}
				
				if(fi > se)
				{
					for(i=0;i<strlen(f);i++)
					{
						putchar('-');
					}
					putchar('\n');
				}
				else
				{
					for(i=0;i<strlen(s)+1;i++)
					{
						putchar('-');
					}
					putchar('\n');
				}
				if(op == '+')
				{
					id = 1;
				}
				if(op == '-')
				{
					id = 2;
				}
				if(id == '*')
				{
					id = 3;
				}
				
				
				a1 = (int*)malloc(strlen(f)*sizeof(int));
				a2 = (int*)malloc(strlen(s)*sizeof(int));
				ch = (int*)malloc(maxi*sizeof(int));
				for(i=0;i<fi;i++)
				{
					if(fi < se)
					{
						for(j=0;j<se-fi;j++)
						{
							a1[j] = 0;
						}
						
						current = f[i];
						a1[i+j] = f[i] - 48;
					}
					else
					{
						current = f[i];
						a1[i] = f[i] - 48;
					}
				}
				for(i=0;i<strlen(s);i++)
				{
					if(fi > se)
					{
						for(j=0;j<fi-se;j++)
						{
							a2[j] = 0;
						}
						current = f[i];
						a2[i+j] = s[i] - 48;
					}
					else
					{
						current = f[i];
						a2[i] = s[i] - 48;
					}
				}

				
				
		
		switch(id)
		{
			case 1:
			{
				for(i=maxi-1;i>=0;i--)
				{
					semi = a1[i] + a2[i] + tem;
					ch[p++] = semi%10;
					tem = semi/10;
					if(semi == 0)
					{
						if(tem != 0)
						{
							ch[p++] = tem;
						}
					}
				}
				
				if(maxi <= p)
				{
					if(se >= fi)
					{
						for(i=0;i<=maxi-p;i++)
						{
							putchar(' ');
						}
					}
				}
				
				for(i=maxi-1;i>=0;i--)
				{
					printf("%d",ch[i]);
				}
				putchar('\n');
				break;
				
			}
			case 2:
				{
					
					if(fi =  p)
					{
						if(se >= fi)
						{
							for(i=0;i<=maxi-p;i++)
							{
								putchar(' ');
							}
						}
					}
					
					for(i=maxi-1;i>=0;i--)
					{
						if(a1[i] < a2[i])
						{
							ch[p++] = a1[i] - a2[i] + 10;
							a1[i-1] = a1[i-1] - 1;
						}
						else
						{
							ch[p++] = a1[i] - a2[i];
						}
					}
					if(strlen(f) == strlen(s))
					{
						printf(" ");
					}
					for(i=maxi-1;i>=0;i--)
					{
						printf("%d",ch[i]);
					}
					putchar('\n');
					break;
				}
		}
	}
}
