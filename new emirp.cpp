#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int prime(long long n)
{
	int i, flag = 0;
	
	if (n == 2)
		flag = 0;
	
	else if (n % 2 == 0)
		flag = 1;
	else {
		for (i = 3; i <= sqrt(n); i += 2) {
			if (n % i == 0) {
				flag = 1;
				break;
			}
		}
	}
	
	return flag;
}

int main()
{
	long long N, P;
	int f1, f2;
	char E[1000001], F[1000001];
	
	while (cin >> N) {
		
		f1 = prime(N);
		
		sprintf(E, "%d", N);
		strrev(E);
		
		P = atoi(E);
		f2 = prime(P);
		
		if (f1 == 0 && f2 == 0 && N != P) 
			printf("%lld is emirp\n", N);
		else if (f1 == 0 && f2 == 0 && N == P) 
			printf("%lld is prime\n", N);
		else
			printf("%lld is not prime\n", N);
		
	}
	
	return 0;
}
