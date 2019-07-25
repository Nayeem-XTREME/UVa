#include <stdio.h>
int main()
{
    int a, b, t1, t2;

    while (1) {
        scanf("%d %d", &a, &b);

        if (a == -1 && b == -1)
            break;

        else if (b > a) {
            t1 = b - a;
            t2 = (a + 100) - b;

            if (t1 < t2)
                printf("%d\n", t1);
            else
                printf("%d\n", t2);
        }

        else {
            t1 = a - b;
            t2 = (b + 100) - a;

            if (t1 < t2)
                printf("%d\n", t1);
            else
                printf("%d\n", t2);
        }

    }

    return 0;
}
