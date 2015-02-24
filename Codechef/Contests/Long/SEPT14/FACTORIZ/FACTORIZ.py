import sys
     
def gen(m,n):
    if m==1:
        m+=1
    if m<=2<=n:
        yield 2
    if m%2==0:
        m+=1
    isp=set(xrange(m,n+1,2));
    sq=int(n**0.5)+1
    for i in xrange(3,sq,2):
        if i==3 or (i%3)!=0:
            if i in isp:
                yield i
            isp.difference_update(xrange((m//i)*i,n+1,i))
    for i in sorted(isp):
        yield i

t = input()
arr = [];
#m,n=[int(i) for i in raw_input().split()]
m = 1
n = 50500
z = 0;
for p in gen(m,n):
    arr.append(p);
    z+=1;
#len = arr.length();
#for i in range(0,k) :
#   print arr[i];
    
while t != 0 :
    n = input()
    p = []

    count = 0
    k = 0
    i=0
    flag = 0
    while count<=91000:
        r = 0
        if i == z :
            p.append(n);
            break;
        
        while n%arr[i]==0:
            #print "i = " ,i   
            if n%arr[i] == 0 :
                p.append(arr[i])
                k+=1
            if arr[i] == n :
                flag = 1
                n = n/arr[i]
                #p.append(n);
                break
            n = n/arr[i]
            r+=1
            count+=1;
            if count == 95000 :
                p.append(n)
                flag = 1
                break;
        i+=1
        if flag == 1 :
            break;
        count+=1;
    if n != 1:
        p.append(n);
        k+=1
    if k == 0:
        p.append(n);
        k+=1;
    print k
    num = 1
    for i in range(0,k) :
        print p[i]
        #num = num*p[i]

    #print num

    t-=1
    
            
