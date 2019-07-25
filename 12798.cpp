#include <iostream>
using namespace std;

int main()
{
	int S[100][100];
	int M, N, count, flag;
	
	while (cin >> N >> M) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> S[i][j];
			}
		}
		count = 0;
		for (int i = 0; i < N; i++) {
			
			flag = 0;
			for (int j = 0; j < M; j++) {
				if (S[i][j] == 0) {
					flag = 1;
					break;
				}	
			}
			
			if (flag == 0)
				count++;
		}
		
		cout << count << endl;
	}
	
	return 0;
}
