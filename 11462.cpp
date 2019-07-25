#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector <int> v;
	int n, m;
	
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		else {
			for (int i = 0; i < n; i++) {
				cin >> m;
				v.push_back(m);
			}
			sort(v.begin(), v.end());
			
			for (int i = 0; i < n; i++) {
				cout << v[i];
				if (i != n - 1)
					cout << " ";
			}
			
			cout << endl;
		}
		
		v.clear();
	}
	
	return 0;
}
