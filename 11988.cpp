#include <bits/stdc++.h>
#include <list>
using namespace std;
int main()
{
	std::list <char> mylist;
	char a[100000];
	std::list <char> :: iterator it;
	
	while (scanf("%s", a) == 1) {
		
		it = mylist.begin();
		int l = strlen(a);
		
		for (int i = 0; i < l; i++) {
			if (a[i] != '[' && a[i] != ']')
				mylist.insert(it, a[i]);
			else if (a[i] == '[')
				it = mylist.begin();
			else if (a[i] == ']')
				it = mylist.end();
		}
		
		for (it = mylist.begin(); it != mylist.end(); it++) {
			cout << *it;
		}
		
		cout << endl;
		mylist.clear();
		
	}
	
	return 0;
	
}
