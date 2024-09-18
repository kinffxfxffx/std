#include <stdio.h>

int main()
{
    puts("Enter the sup");
    int border;
    scanf("%d", &border);

    if (border >= 2)
    {
    printf("2\n");
    }
    for (int numeric = 3; numeric <= border; numeric += 2)
    {
        int numberOfDivisors = 0;
        for (int divider = 3; divider * divider <= numeric; divider += 2)
        {
            if (numeric % divider == 0)
            {
                numberOfDivisors += 1;
                break;
            }
        }
        if (numberOfDivisors == 0)
        {
            printf("%d\n", numeric);
        }
    }
    return 0;              // test: border = 100000, output = 9592 numbers
}