#include <stdio.h>
#include <string.h>

int main()
{
    int counter = 0;
    unsigned size;
    puts("print the size of the string");
    scanf("%u", &size);

    char str[size];
    printf("input your string\n");
    scanf("%s", str);
    int const lengthOfString = strlen(str);

    for (int index = 0; index < lengthOfString; index++)
    {
        if (counter < 0)
        {
            printf("Your string does not meet the requirements. \n");
            return 0;
        }
        if (str[index] == ')')
            counter -= 1;
        else
            counter += 1;
    }

    printf("Your string meets the requirements. \n");
    return 0;
}