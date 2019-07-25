#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	int T, i, j, sum, rem, s;
	scanf("%d", &T);
	
	for (i = 0; i < T; i++) {
		scanf("%lld", &n);
		sum = 0;
		while (n != 0) {
			rem = n % 10;
			sum += rem * rem;
			n = n / 10;
		}
		cout << sum << endl;
		while (1) {
			s = 0;
			while (sum != 0) {
				rem = sum % 10;
				s += rem * rem;
				sum = sum / 10;
			}
			sum = s;
			
			if (s < 10)	
				break;	
		}
		cout << s << endl;
		
		
		
	}
	
	return 0;
}
