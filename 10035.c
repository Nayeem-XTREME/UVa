#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, l1, l2, c;
	char A[11], B[11];
	
	while (1) {
		scanf("%s %s", &A, &B);
		
		l1 = strlen(A);
		l2 = strlen(B);
		c = 0;
		
		if (A == '0' && B == '0')
			break;
		else {
			if (l1 > l2) {
				for (i = l1 - 1, j = l2 - 1; i >= 0, j >= 0; i--, j--) {
					c = (A[i] - '0') + (B[j] - '0') / 10;
				}
			}
		}
		
		//printf("A[0] = %d, B[0] = %d\n", A[0] - '0', B[0] - '0');
	}
	
	return 0;
}
