void *ft_memalloc(size_t size)
{
	int *p;
	p = (int *)malloc(sizeof(int *) * size);
	int i = 0;
	int k = 0;
	while (i < (int)size)
	{
		p[i] = k;
		i++;
	}
	return p;
}
