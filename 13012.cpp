#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	
	while (scanf("%d", &n) == 1) {
		int sum = 0;
		for (int i = 0; i < 5; i++) {
			scanf("%d", &m);
			if (m == n)
				sum++;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}
