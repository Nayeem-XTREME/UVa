#include <stdio.h>
int main()
{

    int all, total, free, empty, e, f, c, N, i;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {

        scanf("%d %d %d", &e, &f, &c);

        total = e + f;
        all = e + f;

        while (total >= c) {
            empty = total % c;
            free = total / c;

            total = free + empty;
            all =all + free;

        }

        printf("%d\n", all - (e + f));


    }


    return 0;
}
