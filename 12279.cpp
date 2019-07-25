#include <stdio.h>
int main()
{
	int N, T, i, e[1001], c1, c2, k;
	
	for (k = 0; ; k++) {
		scanf("%d", &N);
		if (N == 0)
			break;
		else {
			c1 = 0;
			c2 = 0;
			for (i = 0; i < N; i++) {
				scanf ("%d", &e[i]);
				if (e[i] >= 1 && e[i] <= 99)
					c1++;
				else if (e[i] == 0)
					c2++;
			}
			
		}
		printf("Case %d: %d\n", k + 1, c1 - c2);
		
	}
	
	
	
	return 0;
}
