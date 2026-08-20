#include <stdio.h>

int main()
{
    char op1, op2, result, op;

    printf("Enter three address code\n");
    printf("Example: t1 = a + b\n");
    printf("Enter result operand: ");
    scanf(" %c", &result);

    printf("Enter first operand: ");
    scanf(" %c", &op1);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second operand: ");
    scanf(" %c", &op2);

    printf("\nAssembly Code:\n");

    printf("MOV R0, %c\n", op1);

    if (op == '+')
        printf("ADD R0, %c\n", op2);
    else if (op == '-')
        printf("SUB R0, %c\n", op2);
    else if (op == '*')
        printf("MUL R0, %c\n", op2);
    else if (op == '/')
        printf("DIV R0, %c\n", op2);
    else
        printf("Invalid Operator\n");

    printf("MOV %c, R0\n", result);

    return 0;
}