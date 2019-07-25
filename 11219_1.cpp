#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int DD1, MM1, YY1, DD2, MM2, YY2;
	int T;
	cin >> T;
	
	for (int i = 1; i <= T; i++) {
		
		scanf("%d/%d/%d", &DD2, &MM2, &YY2);
		scanf("%d/%d/%d", &DD1, &MM1, &YY1);
		
		if (DD1 > DD2) {
			MM1++;
		}
		
		if (MM1 > MM2) {
			YY1++;
		}
		
		int age = YY2 - YY1;
		
		if (age < 0)
			cout << "Case #" << i << ": Invalid birth date" << endl;
		else if (age > 130)
			cout << "Case #" << i << ": Check birth date" << endl;
		else 
			cout << "Case #" << i << ": " << age << endl;
	}
	
	return 0;
}
