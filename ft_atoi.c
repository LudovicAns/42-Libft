int     ft_atoi(const char *nptr)
{
    int     count;
    int     sign;

    count = 0;
    sign = 1;
    while (*nptr == ' ' && *nptr)
        nptr++;
    if (*nptr == '-' || *nptr == '+')
        sign = (*nptr++ == '-' ? -1 : 1);
    while ((*nptr >= '0' && *nptr <= '9') && *nptr)
        count = count * 10 + (*nptr++ - 48);
    return (count * sign);
}