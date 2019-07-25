#include <iostream>
using namespace std;
int main()
{
	int H1, M1, H2, M2, m;
	
	while (1) {
		cin >> H1 >> M1 >> H2 >> M2;
		if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0)
			break;
		else {
			if ((H2 * 60 + M2) < (H1 * 60 + M1)) {
				H2 = H2 + 24;
				m = (H2 * 60 + M2) - (H1 * 60 + M1);
			}
			
			else if ((H2 * 60 + M2) > (H1 * 60 + M1)) {
				m = (H2 * 60 + M2) - (H1 * 60 + M1);
			}
		}
		
		cout << m << endl;
	}
	
	return 0;
}
