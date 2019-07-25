#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	char word[10000];
	int l, i, c = 1;
	
	while (gets(word)) {
		l = strlen(word);
		
		for (i = 0; i < l; i++) {
			
			if (word[i] == '"' && c % 2 != 0) {
				cout << "``";
				c++;
			}	
			
			
			else if (word[i] == '"' && c % 2 == 0) {
				cout << "''";
				c++;
			}
		
			else
				cout << word[i];
		}
		cout << endl;
	}
	
	return 0;
}
