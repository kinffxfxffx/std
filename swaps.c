#include <stdio.h>

void swap(int firstNumber, int secondNumber)
{
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    printf("firstNumber = %d, secondNumber = %d\n", firstNumber, secondNumber);
    return;
}

int main()
{
    int firstNum, secondNum;
    printf("enter two numbers:  ");
    scanf("%d%d", &firstNum, &secondNum);
    swap(firstNum, secondNum);
    return 0;
}
