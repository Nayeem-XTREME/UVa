#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define VI(a) vector<a>

#define lld long long int
#define MAX 10000010

bool prime[MAX+10];
vector<int>primeList; 
int Vsize;

void sieve()
{
    for(int i=4;i<=MAX;i+=2)
        prime[i]=1;
    int srt = sqrt(MAX);
    for(int i=3;i<=srt;i+=2)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=MAX;j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    prime[0]=1;

}



int main()
{
    sieve(); 

	char c[30];
	int l, i, j;
	lld sum;
	
	while (cin >> c) {
		sum = 0;
		l = strlen(c);
		for (i = 0; i < l; i++) {
			if (c[i] >= 'a' && c[i] <= 'z')
				sum += (c[i] - 'a') + 1;
			else if (c[i] >= 'A' && c[i] <= 'Z')
				sum += (c[i] - 'A') + 27;
		}
		
		if (prime[sum] == 0)
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}

    return 0;

}
