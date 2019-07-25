#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, T, count, l;
    char c[100];

    scanf("%d", &T);

    getchar();

    for (i = 0; i < T; i++) {

        //scanf("%s", c);

        gets(c);

        count = 0;

        l = strlen(c);

        //if (l == 0)
            //continue;



        for (j = 0; j < l; j++) {

            if (c[j] == 'a' || c[j] == 'd' || c[j] == 'g' || c[j] == 'j' || c[j] == 'm' || c[j] == 'p' || c[j] == 't' ||c[j] == 'w' || c[j] == ' ')
                count = count + 1;
            else if (c[j] == 'b' || c[j] == 'e' || c[j] == 'h' || c[j] == 'k' || c[j] == 'n' || c[j] == 'q' || c[j] == 'u' ||c[j] == 'x')
                count = count + 2;
            else if (c[j] == 'c' || c[j] == 'f' || c[j] == 'i' || c[j] == 'l' || c[j] == 'o' || c[j] == 'r' || c[j] == 'v' ||c[j] == 'y')
                count = count + 3;
            else if (c[j] == 's' || c[j] == 'z')
                count = count + 4;

        }

        //puts(c);

        //printf("%d\n", l);


        printf("Case #%d: %d\n", i + 1, count);
    }

    return 0;
}
