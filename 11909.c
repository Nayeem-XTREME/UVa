#include <stdio.h>
#include <math.h>
int main()
{
    int l, w, h, th,  h1;
    float v;

    while((scanf("%d %d %d %d", &l, &w, &h, &th)) == 4) {
        //printf("%d %d %d %d\n", l, w, h, th);
        h1 = tan(th) * l;
        //o = sqrt(i * i + h1 * h1);

        v = (l * h * w) - (0.5 * l * h1 * w);

        printf("%0.3f mL\n", (float)v);

    }
}
