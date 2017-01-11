#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t ft_strlen(const char *str);
void *ft_memalloc(size_t size);
void *ft_memmove(void *dst, const void *src, size_t len);
void ft_memdel(void **ap);
void ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
char *ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
int		ft_wordcount(char *s, char c);
char	**ft_strsplit(char const *s, char c);	
int		ft_intlen(int n);
char 	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(const char *s, int fd);	
void	ft_putnbr_fd(int n, int fd);

#endif
