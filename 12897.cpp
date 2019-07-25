#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	char c[1000005], a, b;
	int T, R, l;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		
		cin >> c;
		l = strlen(c);
		
		cin >> R;
		
		for (int j = 0; j < R; j++) {
			cin >> a >> b;
			for (int k = 0; k < l; k++) {
				if (c[k] == b)
					c[k] = a;
			}
		}
		
		cout << c;
		
		cout << endl;
	}
	
	return 0;
}
