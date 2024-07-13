#include <string.h>


int isemptystring(const char* input)
{
    if (input == NULL || input[0] == '\0')
    {
        return 1;
    }
    return 0;
}

int calculatesum(const char* input)
{
    int sum = 0;
    for (int i=0; i<strlen(input); i++)
    {
        sum+= input[1];
    }
    return sum;
}

int add (const char* input)
{

    if (1 == isemptystring(input))
    {
        return 0;
    }
    return calculatesum(input);
    
}
