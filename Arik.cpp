#include<iostream>
using namespace std;
int main()
{
    long int a,b,c,d;
    while(cin>>a)
    {
        long int e=0,f=0,g=0;
        b=a;
        while(a)
        {
	        d=a%10;
	        e=e*10+d;
	        a=a/10;
        }
        if(e%2==0) 
			g=1;
        if(b%2==0) 
			cout<<b<<" is not prime."<<endl;
        else
        {
            for(c=3;c<b/2;c+=2)
            {
                if(b%c==0) { 
					f=1; 
					goto arik;
				}
            }
            if(b==e) { 
				g=1; 
				goto intisar; 
			}
            for(c=3;c<e/2;c+=2)
            {
                if(e%c==0) { 
					g=1; 
					break;
				}
            }
            goto intisar;
            arik:
            	cout<<b<<" is not prime."<<endl;
            	continue;
            intisar:
            	if(f==0 && g==0) 
					cout<<b<<" is emirp."<<endl;
            	if(f==0 && g==1) 
					cout<<b<<" is prime."<<endl;
        }
    }
    return 0;
}
