#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a[9], c[6];
	
	while (scanf("%d%d%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8]) == 9) {
		c[0] = a[3] + a[6] + a[2] + a[8] + a[1] + a[4];
		c[1] = a[3] + a[6] + a[1] + a[7] + a[2] + a[5];
		c[2] = a[5] + a[8] + a[0] + a[6] + a[1] + a[4];
		c[3] = a[5] + a[8] + a[1] + a[7] + a[0] + a[3];
		c[4] = a[4] + a[7] + a[0] + a[6] + a[2] + a[5];
		c[5] = a[4] + a[7] + a[2] + a[8] + a[0] + a[3];
		
		int min = c[0];
		int in = 0;
		
		for (int i = 1; i < 6; i++) {
			if (min > c[i]) {
				min = c[i];
				in = i;
			}
		}
		
		switch (in) {
			case 0: printf("BCG %d\n", c[0]); break;
			case 1: printf("BGC %d\n", c[1]); break;
			case 2: printf("CBG %d\n", c[2]); break;
			case 3: printf("CGB %d\n", c[3]); break;
			case 4: printf("GBC %d\n", c[4]); break;
			case 5: printf("GCB %d\n", c[5]); break;
		}
	}
	
	return 0;
}
