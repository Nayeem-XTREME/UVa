#include <stdio.h>
#include <math.h>
int main()
{
    int m , n, R, count = 0, temp;

    for (; ;) {
        scanf("%d %d", &m, &n);
        if (m == 0 && n == 0)
            break;
        R = pow(m, n);

        printf("%d\n", R % 10);


    }

    return 0;
}
