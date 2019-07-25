#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char P[650];
	int T, l;
	int m, a, r, g, i, t;
	int count;
	
	cin >> T;
	
	for (int k = 0; k < T; k++) {
		cin >> P;
		l = strlen(P);
		
		m = a = r = g = i = t = 0;
		
		for (int j = 0; j < l; j++) {
			if (P[j] == 'M')
				m++;
			else if (P[j] == 'A')
				a++;
			else if (P[j] == 'R')
				r++;
			else if (P[j] == 'G')
				g++;
			else if (P[j] == 'I')
				i++;
			else if (P[j] == 'T')
				t++; 
		}
		
		a = a / 3;
		r = r / 2;
		
		count = m;
		if (count > a)
			count = a;
		if (count > r)
			count = r;
		if (count > g)
			count = g;
		if (count > i)
			count = i;
		if (count > t)
			count = t;
		
		cout << count << endl;
			
		
	}
	
	return 0;
}
