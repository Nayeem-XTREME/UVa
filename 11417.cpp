#include <iostream>
using namespace std;

int GCD(long long int a, long long int b)
{
	if (b == 0)
		return a;
	else {
		GCD(b, a % b);
	}		
}

int main()
{
	long long int N;
	unsigned long long int G;
	int i, j;
	while (cin >> N) {
		if (N == 0)
			break;
		else {
			G = 0;
			for(i=1;i<N;i++)
				for(j=i+1;j<=N;j++) {
					G+=GCD(i,j);
				}
		}		
		cout << G << endl;
	}
	
	return 0;
}
