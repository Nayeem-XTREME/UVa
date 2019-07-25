#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define M 1000000
bool a[M];

void siv()
{
	long long s = 1000, i, j;
	
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
}

int digit(long long n)
{
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}
	
	return sum;
}

int main()
{
	long long T, k, i, n1, n2, c;
	long long sum;
	siv();
	
	scanf("%lld", &T);
	for (i = 0; i < T; i++) {
		scanf("%lld %lld", &n1, &n2);
		c = 0;
		for (k = n1; k <= n2; k++) {
			sum = digit(k);
			if (a[k] == 0 && a[sum] == 0)
				c++;
		}
		
		printf("%lld\n", c);
	}
	
	return 0;
}
