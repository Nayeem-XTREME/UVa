#include <stdio.h>
#include <string.h>

int main ()
{
    int T, s = 0, d = 0, i;
    char a[100];
    scanf ("%d", &T);
    for (i = 0; i < T ; i++)
    {
        scanf("%s", a);
        if (strcmp (a, "donate") == 0)
        {
            scanf ("%d", &d);
            s = s + d;
        }
        else if (strcmp(a, "report") == 0)
        	printf ("%d\n", s);
    }

    return 0;

}
