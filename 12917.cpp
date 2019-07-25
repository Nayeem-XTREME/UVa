#include <iostream>
using namespace std;

int main()
{
	int P, H, O;
	
	while (cin >> P >> H >> O) {
		if ((P + H) > O)
			cout << "Hunters win!" << endl;
		else if ((P + H) <= O)
			cout << "Props win!" << endl;
	}
	
	return 0;
}
