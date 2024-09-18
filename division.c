#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int division(int a, int b)
{
    bool flag = true;
    int answer = 0;
    if (a * b < 0)
    {
        answer++;
        flag = false;
    }
    a = abs(a);
    b = abs(b);
    while (a >= b)
    {
        a -= b;
        answer++;
    }
    
    if (flag)
        return answer;
    else
        return -answer;
}

int main()
{
    int a, b, answer;
    puts("input 2 numbers");
    scanf("%d%d", &a, &b);
    if (b != 0)
    {
      answer = division(a, b);
      printf("%d\n", answer);
      return 0;
    }
    else{
      puts("error");
      return 0;
    }
}