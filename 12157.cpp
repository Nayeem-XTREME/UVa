#include <iostream>
using namespace std;

int main()
{
	int T, N, C[20], E[20], F[20], H[20], I[20], i, j, m, n;
	float D[20], G[20];
	
	cin >> T;
	
	for (i = 0; i < T; i++) {
		cin >> N;
		for (j = 0; j < N; j++) {
			cin >> C[j];
		}
		
		m = 0;
		
		for (j = 0; j < N; j++) {
			D[j] = ((float)C[j]+1) / 30;
			E[j] = (C[j]+1) / 30;
			if (D[j] > E[j])
				F[j] = int(D[j] + 1) * 10;
			else
				F[j] = D[j] * 10;
				
			m = m + F[j];	
		}
		
		n = 0;
		for (j = 0; j < N; j++) {
			G[j] = ((float)C[j]+1) / 60;
			H[j] = (C[j]+1) / 60;
			if (G[j] > H[j])
				I[j] = int(G[j] + 1) * 15;
			else
				I[j] = G[j] * 15;
				
			n = n + I[j];
		}
		
		if (m < n) {
			cout << "Case " << i + 1 << ": " << "Mile " << m << endl;
		}
		
		else if (n < m) {
			cout << "Case " << i + 1 << ": " << "Juice " << n << endl;
		}
		
		else if (n == m) {
			cout << "Case " << i + 1 << ": " << "Mile Juice " << m << endl;
		}
		
	}
	
	return 0;
}
