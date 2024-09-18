#include <stdio.h>

int countingZeros(int numbers[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == 0){
            counter++;}
    }
    return counter;
}

int main()
{   
    int arrayLength, answer;
    printf("How many elements? Input a number. ");
    scanf("%d", &arrayLength);
    int numbers[arrayLength];
    puts("fill massive with numbers");
    for (int i = 0; i < arrayLength; i++)
    {
        scanf("%d", &numbers[i]);
    }
    answer = countingZeros(numbers, arrayLength);
    printf("%d\n", answer);
    return 0;
}