#include <stdio.h>
int main()
{
	int T, x, y, z, i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d %d %d", &x, &y, &z);
		printf("%d\n", z * (2 * x - y) / (x + y));
	}
	
	return 0;
}
