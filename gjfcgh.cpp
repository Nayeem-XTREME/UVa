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
			cout << D[i] << endl;
		}
		
		for (i = 0, j = 1; j < n ; i++, j++) {
			if (D[i] - D[j] == 1)
				flag = 0;
			else if (D[i] - D[j] > 1 || D[i] - D[j] < 1)
				flag = 1;
		}
		
		cout << flag << endl;
		
		if (flag == 0)
			cout << "Jolly" << endl;
		else
			cout << "Not jolly" << endl;
	}
	
	return 0;
}
