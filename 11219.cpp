#include <bits/stdc++.h>
using namespace std;


int main()
{
	int cdd, cdm, cdy, bdd, bdm, bdy;
	float ca, ba;
	
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		
		//cout << endl;
		scanf("%d/%d/%d", &cdd, &cdm, &cdy);
		scanf("%d/%d/%d", &bdd, &bdm, &bdy);
		
		if ((cdy % 4 == 0 && cdy % 100 != 0) || cdy % 400 == 0) {
			ca = cdy + cdm * ((float)1 / 12) + cdd * ((float)1 / 366);
		}	
		else {
			ca = cdy + cdm * ((float)1 / 12) + cdd * ((float)1 / 365);
		}	
			
		if ((bdy % 4 == 0 && bdy % 100 != 0) || bdy % 400 == 0) {
			ba = bdy + bdm * ((float)1 / 12) + bdd * ((float)1 / 366);
		}	
		else {
			ba = bdy + bdm * ((float)1 / 12) + bdd * ((float)1 / 365);
		}
			

		if (ca < ba) {
			cout << "Case #" << i << ": Invalid birth date" << endl;
		}
		
		else if (int(ca -ba) > 130) {
			cout << "Case #" << i << ": Check birth date" << endl;
		}
		
		else {
			cout << "Case #" << i << ": " << int(ca - ba) << " " << ca << " " << ba << endl;
		}
	}
	
	return 0;
}
