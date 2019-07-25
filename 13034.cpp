#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T, n, flag;
	
	scanf("%d", &T);
	
	for (int j = 1; j <= T; j++) {
		flag = 0;
		for (int i = 0; i < 13; i ++) {
			scanf("%d", &n);
			if (n == 0)
				flag = 1;
		}
		
		if (flag == 1)
			printf("Set #%d: No\n", j);
		else
			printf("Set #%d: Yes\n", j);
	}
	
	return 0;
}
