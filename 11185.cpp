#include <iostream>
using namespace std;

int main()
{
	long long n;
	int m[101];
	int count, i;
	
	while (cin >> n) {
		
		if (n < 0)
			break;
			
		else if (n == 0)
			cout << n << endl;
		else if (n == 1)
			cout << n << endl;
		else if (n == 2)
			cout << n << endl;
			
		else {
			count = 0;
			for (i = 0; n > 2; i++) {
				m[i] = n % 3;
				n = n / 3;
				count++;
			}
			
			cout << n;
			for (int i = count - 1; i >= 0; i--) {
				cout << m[i];
			}
			cout << endl;
		}
		
	}
	
	return 0;
}
