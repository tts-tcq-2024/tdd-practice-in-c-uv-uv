#include <string.h>
#include<stdlib.h>


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
    char* dup_input = NULL;
    dup_input = strdup (input);
    char* input_seg = strtok(dup_input,",");
    while(input_seg != NULL)
    {
        sum += atoi(input_seg);
        input_seg = strtok(NULL,",\n");
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
