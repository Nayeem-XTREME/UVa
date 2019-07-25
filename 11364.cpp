#include <iostream>
using namespace std;
int main()
{
	int T, i, j, n, a[99], min, max;
	
	cin >> T;
	
	for (i = 0; i < T; i++) {
		cin >> n;
		
		for (j = 0; j < n; j++) {
			cin >> a[j];
		}
		
		min = a[0];
		for (j = 1; j < n; j++) {
			if (min > a[j])
				min = a[j];
		}
		
		max = a[0];
		for (j = 1; j < n; j++) {
			if (max < a[j])
				max = a[j];
		}
		
		cout << (max - min) * 2 << endl;
		
	}
	
	return 0;
}
