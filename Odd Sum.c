#include <stdio.h>
int main()
{
    int T, a, b, i, j, sum;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d\n", &a);
        scanf("%d\n", &b);

        sum = 0;

        for (j = a; j <= b; j++) {
            if (j % 2 != 0)
                sum = sum + j;
        }
        printf("Case %d: %d\n", i + 1, sum);
    }

    return 0;
}
