#include <bits/stdc++.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, L, i, count;
	long long sum;
	
	while (1) {
		
		cin >> a >> b >> c >> d >> L;
		
		if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0)
			break;
		else {
			count = 0;
			for (i = 0; i <= L; i++) {
				sum = (i * i * a) + (i * b) +c;
				if (sum % d == 0)
					count++;
			}
			
			cout << count << endl;
		}
		
		
	}
	
	return 0;
}
