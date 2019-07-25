#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, i;
	unsigned long long fact;
	while (scanf("%lld", &n) == 1) {
		if (n > 13)
			cout << "Overflow!" << endl;
		else if (n < 8 && n >= 0) {
			cout << "Underflow!" << endl;
		}
		else if (n < 0) {
			if (n % 2 == 0)
				cout << "Underflow!" << endl;
			else 
				cout << "Overflow!" << endl;
		}
			
		else {
			fact = 1;
			for (i = n; i > 0; i--) {
				fact = fact * i;
			}
			printf("%llu\n", fact);
		}
	}
	
	return 0;
}
