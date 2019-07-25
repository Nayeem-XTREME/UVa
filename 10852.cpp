#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int T, N, i, j, flag;
	
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> N;
		
		for (j = 1; j < N; j++) {
			
			flag = 0;
			
			if (j % 2 == 0) {
				flag = 1;
				break;
			}
			
			else {
				for (i = 3; i < sqrt(j); i = i + 2) {
					if (j % i == 0) {
						flag = 1;
						break;
					}
				}
			}
			
			if (flag != 1) {
				cout << j << endl;
			}
					
		}
		
	}
	
	return 0;
}
