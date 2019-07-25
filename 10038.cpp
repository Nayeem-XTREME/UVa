#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	char A[3001];
	int i, j, n, flag, D[3001];
	
	while (cin >> n) {
		
		flag = 0;
		
		for (i = 0; i < n; i++) {
			cin >> A[i];
		}
		
		for (i = 0, j = 1; j < n; i++, j++) {
			D[i] = abs((A[j] - '0') - (A[i] - '0'));
			cout << "D[" << i << "] = " << D[i] << endl;
		}
		
		for (i = 0; i < n - 1; i++) {
			if (abs(D[i] - D[i + 1]) != 1) {
				flag = 1;
				break;
			}
			else
				flag = 0;
				
			cout << (D[i] - D[j]) << endl;
		}
		
		if (flag == 0)
			cout << "Jolly" << endl;
		else if (flag == 1)
			cout << "Not jolly" << endl;
	}
	
	return 0;
}
