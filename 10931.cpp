#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	int m[101], sum;
	int count, i;
	
	while (cin >> n) {
		
		if (n == 0)
			break;
			
		else if (n == 1)
			cout << "The parity of 1 is 1 (mod 2)." << endl;
		
		else if (n == 2)
			cout << "The parity of 10 is 1 (mod 2)." << endl;
			
		else {
			count = sum = 0;
			for (i = 0; n > 1; i++) {
				m[i] = n % 2;
				if (m[i] == 1)
					sum += m[i];
				n = n / 2;
				count++;
			}
			
			if (n == 1)
				sum += n;
			
			cout << "The parity of " << n;
			for (int i = count - 1; i >= 0; i--) {
				cout << m[i];
			}
			cout << " is " << sum << " (mod 2)." <<endl;
		}
		
	}
	
	return 0;
}
