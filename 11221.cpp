#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	char a[10001], b[10001];
	int T, i, l1, l2;
	
	cin >> T;
	getchar();
	
	for (i = 1; i <= T; i++) {
		
		gets(a);
		l1 = strlen(a);
		
		for (int j = 0, k = 0; j < l1; j++) {
			if (a[j] >= 'a' && a[j] <= 'z') {
				b[k] = a[j];
				k++;
			}		
		}
		
		l2 = strlen(b);
		
		printf("Case #%d:\n", i);
		
		if (l2 == (int)sqrt(l2) * (int)sqrt(l2)) {
			if (strcmp(b, strrev(b)) == 0)
				cout << sqrt(l2) << endl;
		}
		
		else {
			cout << "No magic :(" << endl;
		}
		
		for (int j = 0; j < l1; j++) {
			a[j] = '\0';
			b[j] = '\0';
		}
		
		
		//cout << b << endl << l2 << endl;
		
	}
	
	return 0;
}
