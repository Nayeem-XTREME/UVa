#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int arr[100];
int f = -1, r = -1;

int enq(int data)
{
	if (f == -1 && r == -1) {
		arr[++r] = data;
		f++;
	}
	else
		arr[++r] = data;
}

int deq()
{
	int data;
	
	if (f == r) {
		data = arr[f++];
		f = r = -1;
	}
	
	else
		data = arr[f++];
		
		
	return data;
}

int arrclr()
{
	f = r = -1;
	for (int i = 0; i < 60; i++) {
		arr[i] = '\0';
	}
}


int main()
{
	int cn, i, card;
	while (cin >> cn) {
		
		if (cn == 0)
			break;
			
		else if (cn == 1) {
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: 1" << endl;
		}
			
		else {
		
			for (i = 1; i <= cn; i++) {
				enq(i);
			}
		
			cout << "Discarded cards:";
			while (1) {
				cout << " " << deq();
				enq(deq());
			
				if (r - f == 0) {
					cout << endl;
					break;
				}
				else
					cout << ",";	
			}
		
			cout << "Remaining card: " << arr[r] << endl;
			arrclr();
		}
	}
	return 0;
}
