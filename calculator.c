#include <stdio.h>
int main()
{
    double num_1, num_2;
    char opr;

    printf("Enter any operator (+, -, *, /): ");
    scanf("%c",&opr);

    printf("Enter your first number : ");
    scanf("%lf",&num_1);

    printf("Enter your second number : ");
    scanf("%lf",&num_2);

    switch(opr)
    {
    case '+':
    {
        printf("%.2lf + %.2lf = %.2lf\n", num_1, num_2, num_1+num_2);
        break;
    }
    case '-':
    {
        printf("%.2lf - %.2lf = %.2lf\n", num_1, num_2, num_1-num_2);
        break;
    }
    case '*':
    {
        printf("%.2lf * %.2lf = %.2lf\n", num_1, num_2, num_1*num_2);
        break;
    }
    case '/':
    {
        printf("%.2lf / %.2lf = %.2lf\n", num_1, num_2, num_1/num_2);
        break;
    }
    default:
        printf("Invalid operator");
    }

    getch();
    return 0;
}
