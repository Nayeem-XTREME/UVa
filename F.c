#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("CSE", "w");
    fclose(fp);
    return 0;
}
