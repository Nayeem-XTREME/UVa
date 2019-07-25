#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define M 20000000
bool a[M];
long b[1000000][2], c;

void siv()
{
	long long s = 4472, i, j;
	
	for (int i = 4; i <= M; i += 2) {
		a[i] = 1;
	}
	for (i = 3; i <= s; i += 2) {
		if (a[i] == 0) {
			for (j = i * i; j <= M; j += i) {
				if (a[j] == 0)
					a[j] = 1;
			}		
		}
	}
	a[1] = 1;
	
	for (i = 2, c = 1; i <= M; i++) {
		if (a[i] == 0 && a[i + 2] == 0) {
			b[c][0] = i, b[c][1] = i + 2;
			c++;
		}
	}
}


int main()
{
	int k, i, n;
	siv();
	
	while (cin >> n) {
		printf("(%lld, %lld)\n", b[n][0], b[n][1]);
	}
	return 0;
}
