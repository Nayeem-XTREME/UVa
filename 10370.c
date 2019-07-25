#include <stdio.h>
int main()
{
    int C, N, a[1001], i, j;
    int sum, count, above;
    float avrg, percent;

    scanf("%d", &C);

    for (i = 0; i < C; i++) {

        scanf("%d", &N);

        sum = 0;
        count = 0;

        for (j = 0; j < N; j++) {
            scanf("%d", &a[j]);

            sum = sum + a[j];
            count++;
        }

        //printf("Sum = %d, Count = %d\n", sum, count);

        avrg = sum / count;
        above = 0;

        //printf("Avrg = %f\n", (float)avrg);

        for (j = 0; j < N; j++) {
            if (a[j] > avrg)
                above++;
        }

        //printf("Above = %d\n", above);

        percent = ((float)above / (float)count) * 100.000;

        printf("%0.3f%c\n", (float)percent, 37);
    }

    return 0;
}
