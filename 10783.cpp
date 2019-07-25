#include <iostream>
using namespace std;

int main()
{
	int T, sum, a, b;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		sum = 0;
		for (int j = a; j <= b; j++) {
			if (j % 2 != 0)
				sum = sum + j;
		}
		
		cout << "Case " << i + 1 << ": " <<sum << endl;
	}
	
	return 0;
}
