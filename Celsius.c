#include <stdio.h>
int main()
{
    int T, C, d, i;
    float sum, F, G;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {

        scanf("%d %d", &C, &d);

        G = (9 * C) / 5 + 32;
        sum = G + d;


        F = (5 * sum - 160) / 9;
        printf("Case %d: %0.2f\n", i + 1, F);

    }


    return 0;
}
