unsigned int suma(unsigned int a, unsigned int b)
{
    unsigned int s = 0, i;
    for(i = 1; i <= a; i++)
    {
        if(a % i == 0 && b % i == 0)
            s = s + i;
    }
    return s;
}