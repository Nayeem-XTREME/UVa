#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp,c,rem,sum,f;
    cin>>n;
    temp=n;
    for(c=0;;c++)
    {
        sum=0;
        for(;;){
	        rem=temp%10;
	        temp=temp/10;
	        sum=sum+rem;
	
	        if(temp==0)
	            break;
		}
        temp=sum;
        if(temp<10) 
			break;
    }
    cout<<sum<<endl;
    return 0;
}
