```c
#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter an expression: ");
    fgets(str, sizeof(str), stdin);

    printf("\nOperators found:\n");

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '+')
            printf("+ is an Arithmetic Operator\n");

        else if (str[i] == '-')
            printf("- is an Arithmetic Operator\n");

        else if (str[i] == '*')
            printf("* is an Arithmetic Operator\n");

        else if (str[i] == '/')
            printf("/ is an Arithmetic Operator\n");
    }

    return 0;
}
