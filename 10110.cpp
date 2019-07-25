#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	long long n, s;
	
	while (scanf("%lld", &n) == 1) {
		if (n == 0)
			break;
		
		else {
			
			s = sqrt(n);
			
			if (n == s * s) {
				cout << "yes" << endl;
			}
			
			else
				cout << "no" << endl;
				
			printf("%0.9f\n", s);
		}
	}
	
	return 0;
}
