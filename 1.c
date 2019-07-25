#include <stdio.h>
int main()
{
int n,m,count,t;
while (scanf("%d",&n)==1)
{
count=0;
t=n;
while (n>=3)
{
m=n%3;
n=n/3;

count+=n;
n=n+m;
}
if (n==2)
printf ("%d\n",count+1+t);
else
printf("%d\n",count+t);

}
return 0;
}
