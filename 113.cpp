#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	double n, p, k;
	while (scanf("%lf %lf", &n, &p) == 2) {
		k = pow(10, log10(p)/n);
		printf("%.0lf\n", k);
	}
	
	return 0;
}
