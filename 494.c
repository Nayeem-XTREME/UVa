‪
int main()
{
    char word[100];
    int count, i;

    for ( ; ; ) {

        gets(word);
        count = 0;

        for (i = 0; word[i] != '\0'; i++) {

            if (word[i] == ' ')
            count++;
        }

        printf("%d\n", count + 1);

    }

    return 0;
}
