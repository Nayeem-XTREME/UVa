#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int H, M;
	float sum;
	
	while (scanf("%d:%d", &H, &M) == 2) {
		
		if (H == 0 && M == 0)
			break;
		else {
			float D1 = H * 30 + M * 0.5;
			float D2 = M * 6;
		
			if (D1 >= D2)
				sum = D1 - D2;
			else if (D2 > D1)
				sum = D2 - D1;
		
			if (sum > 180)
				printf("%0.3f\n", 360 - sum);
			else
				printf("%0.3f\n", sum);
		}	
	}
	
	return 0;
}
