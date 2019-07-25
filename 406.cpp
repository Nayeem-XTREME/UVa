#include<iostream>
#include<bits/stdc++.h>

using namespace std;

#define MAX 1050
bool prime[MAX+10];
vector <int> primeList;
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


    for(int i=1;i<=MAX;i++)
    {
        if(prime[i]==0)
        {
            primeList.push_back(i);
        }
    }

    Vsize = primeList.size();

}


int main()
{
	sieve();
	
	int N, C, i, j, count, mid, strt;
	while (scanf("%d %d", &N, &C) == 2) {
		
		count = 0;
		for (i = 0; primeList[i] <= N; i++) {
			count++;
		}
		
		
		printf("%d %d:", N, C);
		
		if (count % 2 == 0) {
			
			mid = count/2;
			strt = C*2;
			
			for (i = mid - (strt/2); i <= mid + (strt/2) - 1; i++) {
				if (i >= 0 && i <= count && primeList[i] >= 1 && primeList[i] < primeList[count])
					printf(" %d", primeList[i]);
			}
			
			printf("\n\n");	
		}
		
		else {

			mid = count/2;
			strt = C*2 - 1;
			
			for (i = mid - (strt/2); i <= mid + (strt/2); i++) {
				if (i >= 0 && i < count && primeList[i] >= 1 && primeList[i] < primeList[count])
					printf(" %d", primeList[i]);
			}
			
			printf("\n\n");
		}
	}
	
	return 0;
}
