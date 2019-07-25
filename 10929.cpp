#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	char a[1001];
	int s1, s2;
	

	while (cin >> a) {
		
		int l = strlen(a);
		s1 = 0;
		for (int i = 0; i < l; i = i + 2) {
			s1 = s1 + (a[i] - '0');
		}
		
		for (int i = 1; i < l; i = i + 2) {
			s1 = s1 - (a[i] - '0');
		}
		
		if (a[0] == '0' && l == 1)
			break;
		else {
			if (s1 % 11 == 0)
				cout << a << " is a multiple of 11." << endl;
			else
				cout << a << " is not a multiple of 11." << endl;
		}
	}
	
	return 0;
}
