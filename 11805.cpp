#include <iostream>
using namespace std;
int main()
{
	int T, N, K, P, i, x;
	cin >> T;
	for (i = 0; i < T; i++) {
		cin >> N >> K >> P;
		x = K + P;
		while (x > N)
			x = x - N;
		cout << "Case " << i + 1 << ": " << x << endl;
	}
	
	return 0;
}
