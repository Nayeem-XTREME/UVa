#include <stdio.h>
int main()
{
    char word[10];
    int T, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%s", word);

        if (((word[0] >= 'a' && word[0] <= 'z') && word[1] == 'n' && word[2] == 'e') || (word[0] == 'o' && (word[1] >= 'a' && word[1] <= 'z') && word[2] == 'e') || (word[0] == 'o' && word[1] == 'n' && (word[2] >= 'a' && word[2] <= 'z')))
            printf("1\n");

        else if (((word[0] >= 'a' && word[0] <= 'z') && word[1] == 'w' && word[2] == 'o') || (word[0] == 't' && (word[1] >= 'a' && word[1] <= 'z') && word[2] == 'o') || (word[0] == 't' && word[1] == 'w' && (word[2] >= 'a' && word[2] <= 'z')))
            printf("2\n");

        else if (((word[0] >= 'a' && word[0] <= 'z') && word[1] == 'h' && word[2] == 'r' && word[3] == 'e' && word[4] == 'e') || (word[0] == 't' && (word[1] >= 'a' && word[1] <= 'z') && word[2] == 'r' && word[3] == 'e' && word[4] == 'e') || (word[0] == 't' && word[1] == 'h' && (word[2] >= 'a' && word[2] <= 'z') && word[3] == 'e' && word[4] == 'e') || (word[0] == 't' && word[1] == 'h' && word[2] == 'r' && (word[3] >= 'a' && word[3] <= 'z') && word[4] == 'e') || (word[0] == 't' && word[1] == 'h' && word[2] == 'r' && (word[4] >= 'a' && word[3] <= 'z') && word[3] == 'e'))
            printf("3\n");

    }

    return 0;
}
