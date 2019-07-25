#include <stdio.h>
#include <string.h>
int main()
{
    char c[10], c1[5] = "Hajj", c2[6] = "Umrah", c3[2] = "*";
    int i;

    for (i = 0; ; i++) {
        gets(c);
        if (strcmp(c, c1) == 0) {
            printf("Case %d: Hajj-e-Akbar\n", i + 1);
        }
        else if (strcmp(c, c2) == 0) {
            printf("Case %d: Hajj-e-Asghar\n", i + 1);
        }
        else if (strcmp(c, c3) == 0)
            break;
    }

    return 0;
}
