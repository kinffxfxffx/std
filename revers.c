#include <stdio.h>


void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", A[i]);
}

void reverse(int *A, int start, int end)
{
    for (int i = start; i < end / 2; i++)    
    {
        int item = A[i];
        A[i] = A[end - i - 1];
        A[end - i - 1] = item;
    }
}

int main()
{
    int m, n, seqLength;
    puts("write the length for two arrays (m and n)");
    scanf("%d%d", &m, &n);

    seqLength = m + n;
    int numbers[seqLength];
    printf("fill the array with %d numbers\n ", seqLength);
    for (int i = 0; i < seqLength; ++i)
    {
        scanf("%d", &numbers[i]);
    }
    //solution
    reverse(numbers, 0, m);
    reverse(numbers, 0, seqLength);
    reverse(numbers, 0, n);
    printArray(numbers, seqLength);

    return 0;               // test: m = 5, n = 5, array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} output {6, 7, 8, 9, 10, 1, 2, 3, 4, 5}.
}