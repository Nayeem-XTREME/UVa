#include <stdio.h>
int main()
{
    int M, N, c;

    while (scanf("%d %d", &M, &N) != EOF) {
        //scanf("%d %d", &M, &N);
        c = (M - 1) + (M) * (N - 1);
        printf("%d\n", c);
    }


    return 0;
}
