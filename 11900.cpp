#include <iostream>
using namespace std;

int main()
{
	int T, n, P, Q, sum, count;
	int a[50], i, j, k;
	
	cin >> T;
	
	for (i = 0; i < T; i++) {
		cin >> n >> P >> Q;

		for (j = 0; j < n; j++) {
			cin >> a[j];
		}
		sum = count = 0;
		for (k = 0; k < n && k < P ; k++) {
			
			sum = sum + a[k];
			
			if (sum <= Q) {
				count++;
			}
				
		}
		
		cout << "Case " << i + 1 << ": " << count << endl;
		
	}
	
	return 0;
}
