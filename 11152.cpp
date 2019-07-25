#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define PI acos(-1.0)

int main()
{
	
	double a, b, c, x, y, z, r1, r2, s, i, j, k;
	
	while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
		s = (a+b+c)/2;
		r2 = sqrt(((s-a)*(s-b)*(s-c))/s);
		z = PI*r2*r2;
		
		i = sqrt(s*(s-a)*(s-b)*(s-c));
		y = i - z;
		
		j = sqrt((a+b+c)*(a+b-c)*(b+c-a)*(c+a-b));
		r1 = (a*b*c) / j;
		x = (PI * r1 * r1) - i;
		
		printf("%0.4lf %0.4f %0.4f\n", x, y, z);	
	}
		
	
	return 0;
}
