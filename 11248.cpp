#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long long N, i, j;
	
	while (cin >> N) {
		
		for (i = 1; i < 10000; i++) {
			for (j = 1; j < i; j++) {
				if (N == pow(i, 3) - pow(j, 3)) {
					cout << i << " " << j << endl;
					break;
				}	
			}
			//if (N != pow(i, 3) - pow(j, 3)) {
				//cout << "No" << endl;
				//break;
			//}
		}
		
		if (N != pow(i, 3) - pow(j, 3)) {
				cout << "No" << endl;
				//break;
			}
		
	}
	
	return 0;
}
