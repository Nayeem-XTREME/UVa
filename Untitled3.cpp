#include <stdio.h>
#include <string.h>
int main()
{
	char A[11], B[11];
	int i, j, c, m, l1, l2;
	
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
				for (i = l1, j = l2; j > 0; i--, j--) {
					m = (m + (A[i - 1] - '0') + (B[j - 1] - '0')) / 10;
					c = c + m;	
				}
			}
			
			else if (l1 < l2) {
				for (i = l1, j = l2; i > 0; i--, j--) {
					m = (m + (A[i - 1] - '0') + (B[j - 1] - '0')) / 10;
					c = c + m;	
				}
			}
			
			else if (l1 == l2) {
				for (i = l1, j = l2; i > 0, j > 0; i--, j--) {
					m = (m + (A[i - 1] - '0') + (B[j - 1] - '0')) / 10;
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
