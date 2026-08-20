#include <stdio.h>
#include <string.h>

int main()
{
    char exp[100];
    int i, temp = 1;

    printf("Enter expression: ");
    scanf("%s", exp);

    printf("\nThree Address Code:\n");

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '*' || exp[i] == '/')
        {
            printf("t%d = %c %c %c\n",
                   temp, exp[i - 1], exp[i], exp[i + 1]);

            exp[i - 1] = 't';
            exp[i + 1] = '0' + temp;
            temp++;
        }
    }

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '+' || exp[i] == '-')
        {
            printf("t%d = %c %c %c\n",
                   temp, exp[i - 1], exp[i], exp[i + 1]);
            temp++;
        }
    }

    return 0;
}