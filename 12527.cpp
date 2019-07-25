#include <iostream>
using namespace std;

int main()
{
	int N, M, i, A[5000], c1, count;
	
	while (cin >> N >> M) {
		if (N <= M) {
			
			count = 0;
			
			for (i = N; i <= M; i++) {
				j = i;
				c1 = 0;
				for (k = 0; j != 0; k++) {
					A[k] = j % 10;
					j = j / 10;
					c1++;
				}
				
				for (k = 0; k < c1; k++) {
					if (A[k] == A[k + 1])
						break;
					else
						count++;
						
				}
				
				
			}
		}
	}
	
	return 0;
}
