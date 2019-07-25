#include <iostream>
using namespace std;

int main()
{
	int T, a, b, x, y, i;
	cin >> T;
	
	for (i = 0; i < T; i++) {
		cin >> a >> b;
		
		if (a >= b && (a + b) % 2 == 0) {
			x = (a + b) / 2;
			y = (a - b) / 2;
			cout << x << " " << y << endl;
		} 
		else
			cout << "impossible" << endl;
	}
	
	return 0;
}
