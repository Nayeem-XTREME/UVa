#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T, i, n, a[200], b[200];
	
	cin >> T;
	while (T--) {
		cin >> n;
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (i = 0; i < n; i++) {
			cin >> b[i];
		}
		
		for (i = 0; i < n; i++) {
			switch (a[i]) {
				case 1:
					if (b[i] == 1) cout << ".";
					else if (b[i] == 2) cout << ",";
					else if (b[i] == 3) cout << "?";
					else if (b[i] == 4) printf("%c", 34);
					break;
				case 2:
					if (b[i] == 1) cout << "a";
					else if (b[i] == 2) cout << "b";
					else if (b[i] == 3) cout << "c";
					break;
				case 3:
					if (b[i] == 1) cout << "d";
					else if (b[i] == 2) cout << "e";
					else if (b[i] == 3) cout << "f";
					break;
				case 4:
					if (b[i] == 1) cout << "g";
					else if (b[i] == 2) cout << "h";
					else if (b[i] == 3) cout << "i";
					break;
				case 5:
					if (b[i] == 1) cout << "j";
					else if (b[i] == 2) cout << "k";
					else if (b[i] == 3) cout << "l";
					break;
				case 6:
					if (b[i] == 1) cout << "m";
					else if (b[i] == 2) cout << "n";
					else if (b[i] == 3) cout << "o";
					break;
				case 7:
					if (b[i] == 1) cout << "p";
					else if (b[i] == 2) cout << "q";
					else if (b[i] == 3) cout << "r";
					else if (b[i] == 4) cout << "s";
					break;
				case 8:
					if (b[i] == 1) cout << "t";
					else if (b[i] == 2) cout << "u";
					else if (b[i] == 3) cout << "v";
					break;
				case 9:
					if (b[i] == 1) cout << "w";
					else if (b[i] == 2) cout << "x";
					else if (b[i] == 3) cout << "y";
					else if (b[i] == 4) cout << "z";
					break;
				case 0:
					if (b[i] == 1) cout << " ";
					break;
			}
		}
		cout << endl;
	}
	
	return 0;
}
