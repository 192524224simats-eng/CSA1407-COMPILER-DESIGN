#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ||
        ch == '=' || ch == '<' || ch == '>' || ch == '%' ||
        ch == '&' || ch == '|')
        return 1;
    return 0;
}

int main()
{
    char str[500];
    int i = 0;

    printf("Enter a C statement:\n");
    fgets(str, sizeof(str), stdin);

    printf("\nLexical Analysis:\n");

    while (str[i] != '\0')
    {
        /* Ignore spaces, tabs and new lines */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            i++;
        }

        /* Ignore single-line comments */
        else if (str[i] == '/' && str[i + 1] == '/')
        {
            break;
        }

        /* Ignore multi-line comments */
        else if (str[i] == '/' && str[i + 1] == '*')
        {
            i += 2;

            while (str[i] != '\0' &&
                   !(str[i] == '*' && str[i + 1] == '/'))
            {
                i++;
            }

            if (str[i] != '\0')
                i += 2;
        }

        /* Identify identifiers */
        else if (isalpha(str[i]) || str[i] == '_')
        {
            printf("Identifier: ");

            while (isalnum(str[i]) || str[i] == '_')
            {
                printf("%c", str[i]);
                i++;
            }

            printf("\n");
        }

        /* Identify constants */
        else if (isdigit(str[i]))
        {
            printf("Constant: ");

            while (isdigit(str[i]) || str[i] == '.')
            {
                printf("%c", str[i]);
                i++;
            }

            printf("\n");
        }

        /* Identify operators */
        else if (isOperator(str[i]))
        {
            printf("Operator: %c\n", str[i]);
            i++;
        }

        else
        {
            i++;
        }
    }

    return 0;
}