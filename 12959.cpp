#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int J, R, i, j, a[500][500], sum[500], winner, max;
	
	while (cin >> J >> R) {
		for (i = 0; i < R; i++) {
			for (j = 0; j < J; j++) {
				cin >> a[i][j];
			}
		}
			
		for (i = 0; i < J; i++) {
			sum[i] = 0;
		}
			
		for (i = 0; i < R; i++) {
			for (j = 0; j < J; j++) {
				sum[j] += a[i][j];
			}
		}
		max = sum[0];
		winner = 1;
			
		for (i = 1; i < J; i++) {
			if (max <= sum[i]) {
				max = sum[i];
				winner = i + 1;
			}		
		}
				
		cout << winner << endl;
			
	}
	
	return 0;
}
