bool isemptystring(const char* input)
{
    if (input == NULL || input[0] == '\0')
    {
        return true;
    }
    return false;
}

bool isstringZero(const char* input)
{
    if (input == 0)
    {
        return true;
    }
    return false;
}

int add (const char* input)
{
    if (((isemptystring(input)) || (isstringZero(input))) == true)
    {
        return 0;
    }
    return -1;
}
