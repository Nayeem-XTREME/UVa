#include <stdio.h>
#include <stdlib.h>
int main()
{
	char A[3001];
	int i, j, n, flag, D[3000];
	
	while (scanf("%d", &n) == 1) {
		
		for (i = 0; i < n; i++) {
			scanf("%c", &A[i]);
		}
		
		for (i = 0; i + 1 < n; i++) {
			D[i] = abs((A[i] - '0') - (A[i + 1]) - '0');
			printf("D[%d] = %d\n", i, D[i]);
		}
		
	}
	
	return 0;
}
