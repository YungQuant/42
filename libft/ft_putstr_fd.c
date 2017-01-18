#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s || !fd)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
