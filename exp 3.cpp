#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[500];
    int i = 0;

    printf("Enter a statement:\n");
    fgets(str, sizeof(str), stdin);

    printf("\nAfter removing spaces and comments:\n");

    while (str[i] != '\0')
    {
        /* Ignore spaces, tabs and new lines */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
            continue;
        }

        /* Ignore single-line comments */
        if (str[i] == '/' && str[i + 1] == '/')
            break;

        /* Ignore multi-line comment */
        if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;

            while (str[i] != '\0' &&
                   !(str[i] == '*' && str[i + 1] == '/'))
            {
                i++;
            }

            if (str[i] != '\0')
                i += 2;

            continue;
        }

        printf("%c", str[i]);
        i++;
    }

    return 0;
}