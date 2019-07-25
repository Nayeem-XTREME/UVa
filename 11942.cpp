#include <iostream>
using namespace std;

int main()
{
	int n, i, j, a[11], p[10];
	cin >> n;
	cout << "Lumberjacks:" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < 10; j++) {
			cin >> a[j];
		}
		for (j = 0; j < 9; j++) {
			if (a[j] > a[j + 1]) {
				p[j] = 1;		
			}
			else if (a[j] < a[j + 1]) {
				p[j] = 0;
			}
		}
		
		if (p[0] == 0 && p[1] == 0 && p[2] == 0 && p[3] == 0 && p[4] == 0 && p[5] == 0 && p[6] == 0 && p[7] == 0 && p[8] == 0 && p[9] == 0)
			cout << "Ordered" << endl;
		else if (p[0] == 1 && p[1] == 1 && p[2] == 1 && p[3] == 1 && p[4] == 1 && p[5] == 1 && p[6] == 1 && p[7] == 1 && p[8] == 1)
			cout << "Ordered" << endl;
		else
			cout << "Unordered" << endl;
	}
	
	return 0;
}
