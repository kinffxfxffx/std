#include <stdio.h>
#define MX_SUM 27

int main()
{
    int sums[MX_SUM + 1] = {0};
    int ansTickets = 0;

    for (int first = 0; first < 10; first++)
    {
        for (int second = 0; second < 10; second++)
        {
            for (int third = 0; third < 10; third++)
            {
                sums[first + second + third]++;
            }
        }
    }

    for (int index = 0; index < MX_SUM; index++)
    {
        ansTickets += sums[index] * sums[index];
    }
    printf("%d\n", ansTickets);
    return 0;
}