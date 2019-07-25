#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
int main()
{
	char A[11], B[11], C[21], D[21];
	int i, j, k, c, m, l1, l2;
	
	while (1) {
		scanf("%s %s", A, B);
		
		if (A[0] == '0' && B[0] == '0')
			break;
		
		else {
			c = 0;
			m = 0;
			l1 = strlen(A);
			l2 = strlen(B);
			
			
			if (l1 > l2) {
				
				for (j = 0; j < (l1 - l2); j++) {
					C[j] = '0';
				}
				
				for (k = 0; k < l2; k++) {
					C[j] = B[k];
					j++;
				}
				
				for (i = l1; i > 0; i--) {
					m = (m + (A[i - 1] - '0') + (C[i - 1] - '0')) / 10;
					c = c + m;	
				}
			}
			
			else if (l1 < l2) {
				
				for (j = 0; j < (l2 - l1); j++) {
					D[j] = '0';
				}
				
				for (k = 0; k < l1; k++) {
					D[j] = A[k];
					j++;
				}
				
				for (i = l2; i > 0; i--) {
					m = (m + (D[i - 1] - '0') + (B[i - 1] - '0')) / 10;
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
			printf("No carry operation.\n");
		else if (c == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", c);
	}
		
	return 0;
}
