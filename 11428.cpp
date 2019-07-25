#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int N, i, j;
	
	while (cin >> N) {
		
		if (N == 0)
			break;
		
		else {
			int flag = 0;
			for (i = 1; i < 60; i++) {
				for (j = i - 1; j > 0; j--) {
					if (N == i*i*i - j*j*j) {
						cout << i << " " << j << endl;
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 0)
				cout << "No solution" << endl;
		}
		
		
	}
	
	return 0;
}
