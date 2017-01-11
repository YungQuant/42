
int		ft_strcmp(const char *s1, const char *s2)
{
    int cnt = 0;
    while ((*s1 == *s2) && (*s1 != '\0'))
	{
        unsigned char *s1c = (unsigned char *)s1;
        unsigned char *s2c = (unsigned char *)s2;
        if (*s1c < *s2c)
            cnt--;
        if (*s1c > *s2c)
            cnt++;
        s1++;
		s2++;
	}
	return cnt;
}
