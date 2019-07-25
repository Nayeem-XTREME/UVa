#include <stdio.h>
int main()
{
    int t, i;
    long int n, m, a;

    scanf("%d", &t);

    for (i = 0; i < t; i++) {
        scanf("%ld", &n);

        m = (((((n*567) / 9 + 7492) * 235) / 47) - 498);
        a = (m / 10) % 10;
        printf("%ld\n", abs(a));
    }

    return 0;
}
