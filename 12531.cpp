#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int D, H, M;
	int TIME;
	
	while (scanf("%d", &D) == 1) {
		
		int flag = 0;
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 60; j++) {
				
				if (j % 12 == 0)
					TIME = abs(i * 30 + (j / 12) * 6 - j * 6);
				else
					TIME = abs(i * 30 - j * 6);
				
				if (TIME > 180)
					TIME = 360 - TIME;
				
				
				if (TIME == D) {
					flag = 1;
					break;
				}
			}
			
			if (flag == 1)
				break;
		}
		
		if (flag == 1)
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}
	
	return 0;
}
