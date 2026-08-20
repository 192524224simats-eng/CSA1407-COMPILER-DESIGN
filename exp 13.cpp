#include <stdio.h>
#include <string.h>

char str[100];
int i = 0;

void S()
{
    if (str[i] == 'a')
    {
        i++;
        S();

        if (str[i] == 'b')
            i++;
    }
}

int main()
{
    printf("Enter the string: ");
    scanf("%s", str);

    S();

    if (str[i] == '\0')
        printf("String is accepted\n");
    else
        printf("String is rejected\n");

    return 0;
}