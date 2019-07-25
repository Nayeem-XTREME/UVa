#include <stdio.h>
int main()
{
    int x, y, s, d, i, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {


        scanf("%d %d", &s, &d);

        if (s > 0 && d > 0) {

            x = (s + d) / 2;
            y = (s - d) / 2;

            if (d >= s )
                printf("impossible\n");
            else
                printf("%d %d\n", x, y);
        }
    }

    return 0;
}
