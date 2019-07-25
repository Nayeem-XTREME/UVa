#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long sum, m;
    int i, j, num, count;
    char n[100000];

    while (1) {
        scanf("%s", n);
        l = strlen(n);

        if (n == 0)
            break;

        else {

            for (i = l - 1, j = 1; i >= 0; i--, j++) {
                sum = sum + ((n[i] - '0') * (pow(2, j) - 1));
            }

        }

        printf("%lld\n", sum);

    }

    return 0;
}
