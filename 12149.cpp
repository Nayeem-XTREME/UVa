#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int N;
	
	while (cin >> N) {
		if (N == 0)
			break;
		else {
			long long sum = 0;
			for (int i = N; i > 0; i--) {
				sum = sum + (i * i);
			}
			cout << sum << endl;
		}
		
	}
	
	return 0;
}
