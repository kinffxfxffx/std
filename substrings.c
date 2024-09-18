#include <stdio.h>
#include <string.h>

int main()
{
    int asnwer = 0, counter, j;
    unsigned size;
    puts("print the size of main string");
    scanf("%u", &size);
    printf("print the main string then the substring\n");
    char S[size], S1[size];
    scanf("%s", S);                         // request main string
    scanf("%s", S1);                        // request substring
    int const lengthS = strlen(S);          // save the length of main string
    int const lengthS1 = strlen(S1);        // same for the substring
    
    for (int i = 0; i < lengthS;)
    {
        j = 0;                              // variable for substring index
        counter = 0;                        // here we will store the length of the string passed
        int k = i;                          // save index in variable k
        while (S[k] == S1[j])               // while elements in string are equal
        {
            counter += 1;                    
            if (counter == lengthS1)        // if the counter is equal to the length of the substring
            {
                asnwer += 1;                // increase the number of substrings
            }
            j += 1;
            k += 1;
        }
        i++;
    }
    printf("substring occurs %d times \n", asnwer);       // print answer
    return 0;
}                                           // for main string(S) = "abcddd", substring(S1) = "dd", print's the answer = 3.