#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char min[110][110];
	int i, j, c, m, n, a;
	for (a = 1; ; a++) {	
		cin >> n >> m;
		
		if (n == 0 && m == 0)
			break;
		
		else {
			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					cin >> min[i][j];
				}
			}
			
			cout << "Field #" << a << ":" << endl;
	
			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					c = 0;
					if (min[i][j] == '.') {
						if (min[i][j - 1] == '*')
							c++;
						if (min[i - 1][j - 1] == '*')
							c++;
						if (min[i - 1][j] == '*')
							c++;
						if (min[i - 1][j + 1] == '*')
							c++;
						if (min[i][j + 1] == '*')
							c++;
						if (min[i + 1][j + 1] == '*')
							c++;
						if (min[i + 1][j] == '*')
							c++;
						if (min[i + 1][j - 1] == '*')
							c++;
						cout << c;
					}
					
					else if (min[i][j] == '*') {
						cout << "*";
					}
				}
				
				
				cout << endl;
			}
			
			cout << endl;
		}
	}
		
	return 0;
}
