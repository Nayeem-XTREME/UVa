#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char c[40], d[40];
	int a[26];
	int T, i, j, k, p, l, sum;
	
	while (cin >> T) {
		
		for (i = 0; i < T; i++) {
			cin >> c;
			l = strlen(c);
			sum = 0;
			for (j = 0, k = 0; j < l; j++, k++) {
				if (c[j] >= 'a' && c[j] <= 'z') {
					a[k] = c[j];
				}
				
				for (p = j; p < l; p++) {
					if (a[k] == c[p]) {
						sum++;
						c[p] = '0';
					}
				}
					
			}
		}
	}
	
	return 0;
}
