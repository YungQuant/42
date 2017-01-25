/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 14:14:11 by dlemp             #+#    #+#             */
/*   Updated: 2017/01/19 15:58:12 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

size_t 	ft_strlen(const char *str);
void 	*ft_memalloc(size_t size);
void 	*ft_memmove(void *dst, const void *src, size_t len);
void 	ft_memdel(void **ap);
void 	ft_putchar(char c);
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
char 	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char 	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char 	*ft_strsub(char const *s, unsigned int start, size_t len);
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
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_intlen(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int 	ft_isascii(int c);
int 	ft_isdigit(int c);
int		ft_isprint(int c);
void 	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char 	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dest, char *src);
char 	*ft_strncpy(char *dest, const char *src, unsigned int n);
char	*ft_strcat(char *s1, const char *s2);
char 	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char 	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *little);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int 	ft_toupper(int c);
void	ft_putstr(char *str);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	ft_putchar(char c);
#endif
