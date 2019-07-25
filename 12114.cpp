#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	long long B, S;
	
	for (int i = 1; ; i++) {
		cin >> B >> S;
		if (B == 0 && S == 0)
			break;
		else {
			if (B == 0 || B == 1)
				printf("Case %d: :-%c\n", i, 92);
			else if (B < S || B == S)
				printf("Case %d: :-%c\n", i, 124);
			else if (B > S)
				printf("Case %d: :-(\n", i);
		}
	}
	
	return 0;
}
