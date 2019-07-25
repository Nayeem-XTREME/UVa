#include <iostream>
using namespace std;

int main()
{
	int T, i, j, N, m;
	int c0, c1, c2, c3, c4, c5, c6, c7, c8, c9;
	int A[10000];
	
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> N;
		c0 = c1 = c2 = c3 = c4 = c5 = c6 = c7 = c8 = c9 = 0;
		
		for (j = 0; j < N; j++) {
			A[j] = j + 1;
		}
		
		for (j = 0; j < N; j++) {
			while (A[j] != 0) {
				
				m = A[j] % 10;
				A[j] = A[j] / 10;
				
				if (m == 0)
					c0++;
				else if (m == 1)
					c1++;
				else if (m == 2)
					c2++;
				else if (m == 3)
					c3++;
				else if (m == 4)
					c4++;
				else if (m == 5)
					c5++;
				else if (m == 6)
					c6++;
				else if (m == 7)
					c7++;
				else if (m == 8)
					c8++;
				else if (m == 9)
					c9++;
			}	
		}
		cout << c0 << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << " " << c8 << " " << c9 << endl;
	}
	
	return 0;	
} 
