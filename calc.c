#include <stdio.h>
int main()
{
    char op;
    float n1, n2, result;
    printf("Enter Two Numbers: ");
    scanf("%f%f", n1, n2);

    printf("Enter An Operator (+,-,*,/): ");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        result = n1 + n2, "";
        break;
    case '-':
        result = n1 - n2;
        break;
    case '*':
        result = n1 * n2;
        break;
    case '/':
        result = n1 / n2;
        break;
    default:
        printf("Invalid Operator.");
        return 1;
    }
    printf("%.2f %c %.2f = %.2f\n", n1, op, n2, result);
    return 0;
}