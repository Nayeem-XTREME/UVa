#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	char c[85];
	int N, i, j, l;
	float sum;
	cin >> N;
	
	for (i = 0; i < N; i++) {
		cin >> c;
		l = strlen(c);
		sum = 0;
		for (j = 0; j < l; j++) {
			if ((c[j] == 'C' || c[j] == 'H' || c[j] == 'O' || c[j] == 'N') && (c[j + 1] == 'C' || c[j + 1] == 'H' || c[j + 1] == 'O' || c[j + 1] == 'N')) {
				if (c[j] == 'C')
					sum += 12.01;
				else if (c[j] == 'H')
					sum += 1.008;
				else if (c[j] == 'O')
					sum += 16.00;
				else if (c[j] == 'N')
					sum += 14.01;
			}
			
			else if ((c[j] == 'C' || c[j] == 'H' || c[j] == 'O' || c[j] == 'N') && (c[j + 1] >= '0' && c[j + 1] <= '9')) {
				
			}
		}
	}
	
	return 0;
}
