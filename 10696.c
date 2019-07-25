#include <stdio.h>
int main()
{
    long int n;


    while (1) {
        scanf("%ld", &n);

        if (n == 0)
            break;
        else if (n >= 101)
            printf("f91(%ld) = %ld\n", n, n - 10);
        else if (n <= 100) {
            printf("f91(%ld) = %ld\n", n, 91);
        }

    }
    return 0;
}
