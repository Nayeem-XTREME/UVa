#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define PI acos(-1)

int main()
{
	int T, i, L;
	double as, ar, ta;
	
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> L;
		ta = L * L * 0.6;
		ar = PI * (L * 0.2) * (L * 0.2);
		as = ta - ar;
		printf("%0.2f %0.2f\n", ar, as);
	}
	
	return 0;
}
