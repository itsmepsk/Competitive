	//Transform the Expression

    #include <stdio.h>
    #include <string.h>
    int top;
    char ch[401],so[401],to;
     
    void push(char p)
    {
	    top = top+1;
	    so[top] = p;
	    to = so[top];
	    return;
    }
     
    void pop()
    {
	    int i;
	    i = top;
	    printf("%c",so[top]);
	    top--;
	    return;
    }
     
    void pop2()
    {
	    int i;
	    for(i = top;i>=0;i--)
	    {
	    	printf("%c",so[i]);
	    }
    }
     
    int main()
    {
	    int i,t,c;
	    char a;
	    scanf("%d",&t);
	    for(c=0;c<t;c++)
	    {
		    int n = 0;
		    top = -1;
		    scanf("%s",ch);
		    n = strlen(ch);
		    for(i=0;i<n;i++)
		    {
			    a = ch[i];
			    if((a == '*') || (a == '+') || (a == '/') || (a == '-') || (a == '%') || (a == '^'))
			    {
				    if(a == '+' || a == '-')
				    {
					    to = so[top];
					    while(to == '*' || to == '/' || to == '%' || to == '^')
					    {
						    pop();
						    to = so[top];
				    	}
				    }
				    push(a);
			    }
			    else
			    if((a == '('))
			    {
			    	push(a);
			    }
			    else
			    if(a == ')')
			    {
				    while(so[top] != '(')
				    {
				    	pop();
				    }
				    top = top-1;
			    }
			    else
			    {
			    	printf("%c",a);
			    }
		    }
		    if(i == n)
		    {
			    pop2();
			    printf("\n");
		    }
	    }
	    return 0;
    } 
