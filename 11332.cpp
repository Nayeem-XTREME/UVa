#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int digit_sum(char n[]) {
	int sum = 0, l, i;
	l = strlen(n);
	if (l == 1) {
		return (n[0] - '0');
	}
	
	else {
		for (i = 0; i < l; i++) {
			sum += (n[i] - '0');
		}
		
		sprintf(n, "%d", sum);
		
		return digit_sum(n);
	}
}

int main()
{
	char n[20];
	
	while (1) {
		
		cin >> n;
		if (n[0] == '0')
			break;
		else {
			cout << digit_sum(n) << endl;
		}
	}
	
	return 0;
}
