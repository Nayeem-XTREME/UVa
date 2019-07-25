#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char A[11], B[11], C[11], D[11];
	int i, j, c, b, m, l1, l2;
	
	while (1) {
		cin >> A >> B;
		
		if (A[0] == '0' && B[0] == '0')
			break;
		
		else {
			c = 0;
			m = 0;
			l1 = strlen(A);
			l2 = strlen(B);
			
			if (l1 > l2) {
				
				b = l1 - l2;
				for (i = 0; i < b; i++) {
					D[i] = '0';
				}
				
				for (i = b, j = 0; i < (b + l2); i++, j++) {
					D[i] = B[j];
				}
				
				for (i = l1; i > 0; i--) {
					m = (m + (A[i - 1] - '0') + (D[i - 1] - '0')) / 10;
					c = c + m;	
				}
			}
			
			else if (l1 < l2) {
				
				b = l2 - l1;
				for (i = 0; i < b; i++) {
					C[i] = '0';
				}
				
				for (i = b, j = 0; i < (b + l1); i++, j++) {
					C[i] = A[j];
				}
				
				for (i = l2; i > 0; i--) {
					m = (m + (C[i - 1] - '0') + (B[j - 1] - '0')) / 10;
					c = c + m;	
				}
			}
			
			else if (l1 == l2) {
				for (i = l1; i > 0; i--) {
					m = (m + (A[i - 1] - '0') + (B[i - 1] - '0')) / 10;
					c = c + m;	
				}
			}
		}
		
		if (c == 0)
			cout << "No carry operation." << endl;
		else if (c == 1)
			cout << "1 carry operation." << endl;
		else
			cout << c << " carry operations." << endl;
	}
		
	return 0;
}
