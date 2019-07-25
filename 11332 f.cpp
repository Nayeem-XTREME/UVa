#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int digit_sum(long long int n)
{
	long long int temp, rem, sum;
	int i;
	temp = n;
	for (i = 0; temp >= 10 ; i++) {
		sum = 0;
		while (temp != 0) {
			rem = temp % 10;
	        temp = temp / 10;
	        sum = sum + rem;
		}
		
		temp = sum;
	}
	
	return sum;
}

int main()
{
	long long n;
	
	while (1) {
		
		cin >> n;
		if (n == 0)
			break;
		else {
			cout << digit_sum(n) << endl;
		}
	}
	
	return 0;
}
