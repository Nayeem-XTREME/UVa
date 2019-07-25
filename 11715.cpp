#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	float u, v, a, t, s;
	int i, j;

	for (j = 1; ; j++) {
		cin >> i;
		if (i == 0)
			break;
		else {
			switch (i) {
				case 1 :
					cin >> u >> v >> t;
					a = (v - u) / t;
					s = u * t + 0.5 * a * (t * t);
					printf("Case %d: %0.3f %0.3f\n", j, s, a);
					break;
                case 2:
                    cin >> u >> v >> a;
                    t = (v - u) / a;
                    s = u * t + 0.5 * a * (t * t);
                    printf("Case %d: %0.3f %0.3f\n", j, s, t);
					break;
                case 3:
                    cin >> u >> a >> s;
                    v = sqrt(u * u + 2 * a * s);
                    t = (v - u) / a;
                    printf("Case %d: %0.3f %0.3f\n", j, v, t);
					break;
                case 4:
                    cin >> v >> a >> s;
                    u = sqrt(v * v - 2 * a * s);
                    t = (v - u) / a;
                    printf("Case %d: %0.3f %0.3f\n", j, u, t);
					break;
			}
		}
	}

	return 0;
}
