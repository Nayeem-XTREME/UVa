#include <iostream>
using namespace std;

int main()
{
	int T, m, n, count;
	char s[30000];
	
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		
		count = 0;
		for (int j = 0; ; j++) {
		
				cin >> s[j];
				if (s[j] == '\n')
					break;
				else
					count++;
			
		}
		
		m = s[0] - '0';
		n = s[0] - '0';
		
		for (int j = 1; j < count; j++) {
			if (m > s[j] - '0')
				m = s[j] - '0';
			if (n < s[j] - '0')
				n = s[j] - '0';
		}
		
		cout << n - m << endl;
		
	}
	
	return 0;
}
