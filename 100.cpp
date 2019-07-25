#include <iostream>
using namespace std;

int digit_count(long long n)
{
	long long int i, j, count = 0;
	
	while (n != 1) {
		if (n % 2 != 0) {
			n = 3*n + 1;
			count++;
		}
		else {
			n = n / 2;
			count++;
		}
	}
	return count + 1;	
}

int main()
{
	long long int a, b, i, max, j;
	int c[100000];
	
	while (cin >> a >> b) {
		
		if (a < b) {
			for (i = a, j = 0; i <= b; i++, j++) {
				c[j] = digit_count(i);
			}
			max = c[0];
			for (j = 1; j <= (b - a); j++) {
				if (max < c[j])
					max = c[j];
			}
		
			cout << a << " " << b << " " << max << endl;
		}
		
		else if (a > b) {
			for (i = b, j = 0; i <= a; i++, j++) {
				c[j] = digit_count(i);
			}
			max = c[0];
			for (j = 1; j <= (a - b); j++) {
				if (max < c[j])
					max = c[j];
			}
		
			cout << a << " " << b << " " << max << endl;
		}
		
		else if (a == b) {
			for (i = a, j = 0; i <= b; i++, j++) {
				c[j] = digit_count(i);
			}
			max = c[0];
			for (j = 1; j <= (b - a); j++) {
				if (max < c[j])
					max = c[j];
			}
		
			cout << a << " " << b << " " << max << endl;
		}
		
		
				
	}
	
	return 0;
}
