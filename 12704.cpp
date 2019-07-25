#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, i;
	float x, y, r, B;
	
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> x >> y >> B;
		r = sqrt(x * x + y * y);
		printf("%0.2f %0.2f\n", B - r, B + r);
	}
	
	return 0;
}
