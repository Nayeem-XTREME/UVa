#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int T, i, j;
	int n[12];
	char a[12][110];
	
	scanf("%d", &T);
	
	for (i = 1; i <= T; i++) {	
		for (j = 0; j < 10; j++) {
			scanf("%s %d", a[j], &n[j]);
		}
		
		int max = n[0];
		for (j = 1; j < 10; j++) {
			if (max < n[j]) {
				max = n[j];
			}
		}
		
		printf("Case #%d:\n", i);
		for (j = 0; j < 10; j++) {
			if (n[j] == max) {
				printf("%s\n", a[j]);
			}
		}
	}
	
	return 0;
}
