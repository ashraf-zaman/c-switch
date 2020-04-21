#include <stdio.h>
int main()
{
    int num;
    printf("Enter number (0-5) : ");
    scanf("%d",&num);

    switch(num)
    {
    case 0:
        printf("Zero");
        break;

    case 1:
        printf("One");
        break;

    case 2:
        printf("two");
        break;

    case 3:
        printf("Three");
        break;

    case 4:
        printf("Four");
        break;

    case 5:
        printf("Five");
        break;

    default :
        printf("Invalid Number") ;
    }

    getch();
    return 0;
}
