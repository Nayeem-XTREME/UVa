#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, i, a, b, c;
	cin >> t;
	for (i = 1; i <= t; i++) {
		cin >> a >> b >> c;
		if (a <= 20 && b <= 20 && c <= 20)
			printf("Case %d: good\n", i);
		else
			printf("Case %d: bad\n", i);
	}
	
	return 0;
}
