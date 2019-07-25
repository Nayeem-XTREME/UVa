#include <iostream>
using namespace std;
int main()
{
	int N, j;
	int i;
	int count;
	
	for (j = 1; ; j++) {
		cin >> N;
		count = 0;
		if (N < 0)
			break;
			
		else if (N == 0 || N == 1)
			cout << "Case " << j << ": " << count << endl;	
			
		else if (N > 0) {
			
			for (i = 1; ; i = i * 2) {
				if ((float)i >= ((float)N / 2))
					break;
				else
					count++;
			}
			count++;
			cout << "Case " << j << ": " << count << endl;	
		}	
	}
	
	return 0;
}
