```c
#include <stdio.h>

int main()
{
    char str[500];
    int i, spaces = 0, newlines = 0;

    printf("Enter a line of text:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t')
            spaces++;

        if (str[i] == '\n')
            newlines++;
    }

    printf("\nNumber of whitespaces: %d", spaces);
    printf("\nNumber of newlines: %d", newlines);

    return 0;
}


