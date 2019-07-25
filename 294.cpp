#include <bits/stdc++.h>
using namespace std;



int fact (long long a)
{
	int c = 0;
	
//	for (int i = 1; i <= a/2; i++) {
//		if (a%i == 0 && i < a/i)
//			c = c + 2;
//		else if (a%i == 0 && i == a/i)
//			c = c + 1;
//		else if (a%i == 0 && i > a/i)
//			break;
//	}

	int p = sqrt(a);
	
	for (int i = 1; i <= p; i++) {
		if (a%i == 0 && a/i != i) {
			c = c + 2;
		}
		
		else if (a%i == 0 && a/i == i) {
			c = c + 1;
		}
	}
	
	return c;
}




int main()
{
	
	int T;
	long int a, b, i, j, flg, max;
	cin >> T;
	
	for (i = 0; i < T; i++) {
		
		scanf("%ld %ld", &a, &b);
		
		max = flg = 0;
		
		for (j = a; j <= b; j++) {
			int count = fact(j);
			if (max < count) {
				max = count;
				flg = j;
			}
		}
		
		printf("Between %ld and %ld, %ld has a maximum of %ld divisors.\n", a, b, flg, max);
	}
	
	return 0;
}

