#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, a[26][2], temp[2], l, i, j;
	char c[10000];
	
	for (i = 0; i < 26; i++) {
		a[i][0] = 0, a[i][1] = '\0';
	}
	
	cin >> T;
	getchar();
	while (T--) {
		gets(c);
		l = strlen (c);
		
		for (int i = 0; i < l; i++) {
			if (c[i] == 'A' || c[i] == 'a') {
				a[0][0]++, a[0][1] = 'A';
			}	
			else if (c[i] == 'B' || c[i] == 'b') {
				a[1][0]++, a[1][1] = 'B';
			}	
			else if (c[i] == 'C' || c[i] == 'c') {
				a[2][0]++, a[2][1] = 'C';
			}	
			else if (c[i] == 'D' || c[i] == 'd') {
				a[3][0]++, a[3][1] = 'D';
			}	
			else if (c[i] == 'E' || c[i] == 'e') {
				a[4][0]++, a[4][1] = 'E';
			}	
			else if (c[i] == 'F' || c[i] == 'f') {
				a[5][0]++, a[5][1] = 'F';
			}	
			else if (c[i] == 'G' || c[i] == 'g') {
				a[6][0]++, a[6][1] = 'G';
			}	
			else if (c[i] == 'H' || c[i] == 'h') {
				a[7][0]++, a[7][1] = 'H';
			}	
			else if (c[i] == 'I' || c[i] == 'i') {
				a[8][0]++, a[8][1] = 'I';
			}	
			else if (c[i] == 'J' || c[i] == 'j') {
				a[9][0]++, a[9][1] = 'J';
			}	
			else if (c[i] == 'K' || c[i] == 'k') {
				a[10][0]++, a[10][1] = 'K';
			}	
			else if (c[i] == 'L' || c[i] == 'l') {
				a[11][0]++, a[11][1] = 'L';
			}	
			else if (c[i] == 'M' || c[i] == 'm') {
				a[12][0]++, a[12][1] = 'M';
			}	
			else if (c[i] == 'N' || c[i] == 'n') {
				a[13][0]++, a[13][1] = 'N';
			}
			else if (c[i] == 'O' || c[i] == 'o') {
				a[14][0]++, a[14][1] = 'O';
			}	
			else if (c[i] == 'P' || c[i] == 'p') {
				a[15][0]++, a[15][1] = 'P';
			}	
			else if (c[i] == 'Q' || c[i] == 'q') {
				a[16][0]++, a[16][1] = 'Q';
			}	
			else if (c[i] == 'R' || c[i] == 'r') {
				a[17][0]++, a[17][1] = 'R';
			}	
			else if (c[i] == 'S' || c[i] == 's') {
				a[18][0]++, a[18][1] = 'S';
			}	
			else if (c[i] == 'T' || c[i] == 't') {
				a[19][0]++, a[19][1] = 'T';
			}	
			else if (c[i] == 'U' || c[i] == 'u') {
				a[20][0]++, a[20][1] = 'U';
			}				
			else if (c[i] == 'V' || c[i] == 'v') {
				a[21][0]++, a[21][1] = 'V';
			}	
			else if (c[i] == 'W' || c[i] == 'w') {
				a[22][0]++, a[22][1] = 'W';
			}	
			else if (c[i] == 'X' || c[i] == 'x') {
				a[23][0]++, a[23][1] = 'X';
			}	
			else if (c[i] == 'Y' || c[i] == 'y') {
				a[24][0]++, a[24][1] = 'Y';
			}	
			else if (c[i] == 'Z' || c[i] == 'z') {
				a[25][0]++, a[25][1] = 'Z';
			}		
		} 		
	}
	
	for (i = 0; i < 26; i++) {
		for (j = i + 1; j < 26; j++) {
			if (a[j][0] > a[i][0]) {
				temp[0] = a[i][0], temp[1] = a[i][1];
				a[i][0] = a[j][0], a[i][1] = a[j][1];
				a[j][0] = temp[0], a[j][1] = temp[1];
			}
			
			else if (a[j][0] == a[i][0] && a[j][1] < a[i][1]) {
				temp[0] = a[i][0], temp[1] = a[i][1];
				a[i][0] = a[j][0], a[i][1] = a[j][1];
				a[j][0] = temp[0], a[j][1] = temp[1];
			}
		}
	}
	
	for (int i = 0; i < 26; i++) {
		if (a[i][0] > 0)
			printf("%c %d\n", a[i][1], a[i][0]);
	}
	
	return 0;
}
