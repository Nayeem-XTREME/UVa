#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long N, M, a[15], count, i, j;
	while (scanf("%lld %lld", &N, &M) == 2) {
		for (i = 0; i < M; i++) {
			scanf("%lld", &a[i]);
		}
		count = N;
		for (i = 2; i <= N; i++) {
			int flag = 0;
			for (j = 0; j < M; j++) {
				if (i % a[j] == 0) {
					flag = 1;
					break;
				}
			}
			
			if (flag == 1)
				count--;
		}
		cout << count << endl;
	}
	
	return 0;
}
