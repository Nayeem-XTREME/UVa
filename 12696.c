#include <stdio.h>
int main()
{
    float l, w, d, m;
    int i, T, count = 0;

    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%f %f %f %f", &l, &w, &d, &m);
        if (((l <= 56 && w <= 45 && d <= 25) || (l + w + d) <= 125) && m <= 7) {
            printf("1\n");
            count++;
        }
        else
            printf("0\n");
    }

    printf("%d\n", count);
    return 0;
}
