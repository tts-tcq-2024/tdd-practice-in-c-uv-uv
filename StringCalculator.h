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

int islessthanthousand(const char *input_seg)
{    
    int sum = 0;
    int value_check = atoi(input_seg);
    if(value_check < 1000)
    {
        sum += value_check;
        return sum;
    }
    return 0;
     
}

void appendcustomdelimiter(const char* input, char* delimiter)
 {
    int i = 2; 
    while(input[i] != '\n')
    {
        char temp[1] = {input[i]};
        strncat (delimiter, temp,1);
        i = i+1;
    }
}

void checkcustomdelimiter(const char* input, char* delimiter)
{
    if (input[0] == '/' && input[1] == '/')
    {
        strcpy(delimiter, "");
        appendcustomdelimiter(input,delimiter);
    }
    else
    {
        delimiter = ',\n';
    }
}

int calculatesum(const char* input, char* delimiter)
{
    int sum = 0;
    char* dup_input = NULL;
    dup_input = strdup (input);
    char* input_seg = strtok(dup_input,delimiter);
    while(input_seg != NULL)
    {
        sum = sum + islessthanthousand(input_seg);
        input_seg = strtok(NULL,delimiter);
    }
    return sum;
}

int add (const char* input)
{
    char error_message[256] = "";
    char delimiter[128] = ',\n';
    if (1 == isemptystring(input))
    {
        return 0;
    }
    checkcustomdelimiter(input, delimiter);
    return calculatesum(input, delimiter);
    
}
