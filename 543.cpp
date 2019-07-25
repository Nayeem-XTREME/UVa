#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define M 2000000
bool a[M];
int c = 0;

void siv()
{
	int s = sqrt(M), i, j;
	
	for (int i = 4; i <= M; i += 2) {
		a[i] = 1;
	}
	for (i = 3; i <= s; i += 2) {
		if (a[i] == 0) {
			for (j = i * i; j <= M; j += 2*i) {
				a[j] = 1;
			}		
		}
	}
	a[0] = a[1] = 1;
	
}


int main()
{
	int i, n;
	siv();
	int flag;
	
	while (scanf("%d", &n) == 1) {
		
		if (n == 0)
			break;
			
		else {
			flag = 0;
			for (i = 2; i < n; i++) {
				if (a[i] == 0 && a[n-i] == 0) {
					printf("%d = %d + %d\n", n, i, n - i);
					flag = 1;
					break;
				}		
			}
			
			if (n % 2 == 0 && flag == 0)
				printf("Goldbach's conjecture is wrong\n");
		}	
	}
	
	
	
	return 0;
}
