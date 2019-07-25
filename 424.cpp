#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	char a[200], b[200] = {'0'};
	int i, j, k, l1, l2;
	
	while (1) {
		
		cin >> a;
		
		if (a[0] == '0')
			break;
			
		else {
			strrev(a);
			l1 = strlen(a);
			l2 = strlen(b);
			
			int m = 0, n;
			
			if (l1 > l2) {
				
				for (j = l2; j < l1; j++) {
					b[j] = '0';
				}
				
				for (i = 0; i < l1; i++) {
					n = (a[i] - '0') + (b[i] - '0');
					b[i] = ((m + n) % 10) + '0';
					m = (m + n) / 10;
				}
				
				if (m > 0)
					b[i] = m + '0';
			}
			
			else if (l1 < l2) {
				
				for (j = l1; j < l2; j++) {
					a[j] = '0';
				}
				
				for (i = 0; i < l2; i++) {
					n = (a[i] - '0') + (b[i] - '0');
					b[i] = ((m + n) % 10) + '0';
					m = (m + n) / 10;
				}
				
				if (m > 0)
					b[i] = m + '0';
			}
			
			else if (l1 == l2) {
					
				for (i = 0; i < l1; i++) {
					n = (a[i] - '0') + (b[i] - '0');
					b[i] = ((m + n) % 10) + '0';
					m = (m + n) / 10;
				}
				
				if (m > 0)
					b[i] = m + '0';
			}
		}
	}
	
	cout << strrev(b) << endl;
	
	return 0;
}
