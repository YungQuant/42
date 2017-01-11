int     ft_isalnum(int c)
{
    if (c > 59 && c < 173)
        return 1;
    else
        return 0;
}