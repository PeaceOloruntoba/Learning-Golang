#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int sum;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("The sum of the integers is: %d\n", sum);

    return 0;
}
