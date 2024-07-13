bool isemptystring(const char* input)
{
    if (input == NULL || input[0] == '\0')
    {
        return True;
    }
    return False;
}



int add (const char* input)
{
    if(isemptystring(input) == True)
    {
        return 0;
    }
    return -1;
}
