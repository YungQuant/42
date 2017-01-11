int     ft_isprint(int c)
{
    if (c >= 40 && c <= 177)
        return 1;
    else
        return 0;
}