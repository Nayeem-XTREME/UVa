#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char s[10001];
	int T, i, j, p, count, l, k;
	
	cin >> T;
	getchar();
	
	for (i = 0; i < T; i++) {
		
		gets(s);
		l = strlen(s);
		p = sqrt(l);
		
		if (l == (int)sqrt(l) * (int)sqrt(l)) {
			
			for (k = 0; k < p; k++) {
				
				for (j = k; j < l; j = j + p) {
					cout << s[j];
				}
			
			}
			cout << endl;
		}
		
		else {
			cout << "INVALID" << endl;
		}
	}
	
	return 0;
}
