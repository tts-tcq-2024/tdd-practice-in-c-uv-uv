int isemptystring(const char* input)
{
    if (input == NULL || input[0] == '\0')
    {
        return 1;
    }
    return 0;
}

int isstringZero(const char* input)
{
    if (input[0] == "0")
    {
        return 1;
    }
    return 0;
}

int add (const char* input)
{
    int var1 = 0;
    int var2 = 0;  
    var1 = isemptystring(input);
    var2 = isstringZero(input);
    if (1 == (var1 | var2))
    {
        return 0;
    }
    return -1;
}
