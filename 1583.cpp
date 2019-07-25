#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int digit_sum(long long n)
{
	long long int temp, rem, sum;
	int i;
	sum = 0;
	while (n != 0) {
		rem = n % 10;
	    n = n / 10;
	    sum = sum + rem;
	}
	return sum;
}

int main()
{
	long long n, sum;
	int T;
	scanf("%d", &T);
	
	for (int i = 0; i < T; i++) {
		scanf("%lld", &n);
		int flag = 0;
		
		for (int j = n - 100; j <= n; j++) {
			sum = j + digit_sum(j);
			if (sum == n) {
				cout << j << endl;
				flag = 1;
				break;
			}		
		}
		
		if (flag == 0) {
				cout << "0" << endl;
		}
	}
	
	return 0;
}
