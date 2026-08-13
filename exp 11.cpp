#include <stdio.h>
#include <string.h>

struct symbol
{
    char name[20];
    char type[20];
    int size;
};

int main()
{
    struct symbol s[20];
    int n, i;

    printf("Enter number of symbols: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter symbol name: ");
        scanf("%s", s[i].name);

        printf("Enter type: ");
        scanf("%s", s[i].type);

        printf("Enter size: ");
        scanf("%d", &s[i].size);
    }

    printf("\n--- SYMBOL TABLE ---\n");
    printf("Name\tType\tSize\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\t%s\t%d\n",
               s[i].name, s[i].type, s[i].size);
    }

    return 0;
}