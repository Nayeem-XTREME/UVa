#include<stdio.h>
#include<string.h>
int main()
{
char a[5],b[5],c[5],d[5];
int kase,i,j,k,x,y,z,val,sum1,sum2,sumt;
while(scanf("%d\n",&kase)==1)
{
for(int count=1;count<=kase;count++)
{
scanf("%s %s %s %s",&a,&b,&c,&d);
sum1=sum2=sumt=0;
sum1+=((a[0]-48)*2)/10+((a[0]-48)*2)%10+((a[2]-48)*2)/10+((a[2]-48)*2)%10;
sum1+=((b[0]-48)*2)/10+((b[0]-48)*2)%10+((b[2]-48)*2)/10+((b[2]-48)*2)%10;
sum1+=((c[0]-48)*2)/10+((c[0]-48)*2)%10+((c[2]-48)*2)/10+((c[2]-48)*2)%10;
sum1+=((d[0]-48)*2)/10+((d[0]-48)*2)%10+((d[2]-48)*2)/10+((d[2]-48)*2)%10;
sum2=a[1]-48+a[3]-48+b[1]-48+b[3]-48+c[1]-48+c[3]-48+d[1]-48+d[3]-48;
sumt=sum1+sum2;
if(sumt%10==0)printf("Valid\n");
else printf("Invalid\n");
}
}
return 0;
}
