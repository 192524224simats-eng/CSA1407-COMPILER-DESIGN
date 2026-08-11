#include <stdio.h>
#include <string.h>

int main()
{
    char str[500];

    printf("Enter a line:\n");
    fgets(str, sizeof(str), stdin);

    /* Check single-line comment */
    if (str[0] == '/' && str[1] == '/')
    {
        printf("It is a single-line comment.\n");
    }

    /* Check multi-line comment */
    else if (str[0] == '/' && str[1] == '*')
    {
        if (strstr(str, "*/") != NULL)
            printf("It is a multi-line comment.\n");
        else
            printf("It is the beginning of a multi-line comment.\n");
    }

    else
    {
        printf("It is not a comment.\n");
    }

    return 0;
}
