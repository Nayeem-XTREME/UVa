#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	double area, s;
	
	while (cin >> a >> b >> c) {
		s = (a + b + c) / 2.00;
		area = (4.00/3.00) * sqrt (s * (s - a) * (s - b) * (s - c));
		if (area > 0)
			printf("%0.3f\n", area);
		else
			printf("-1.000\n");
	}
	
	return 0;
}
