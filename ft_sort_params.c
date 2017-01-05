/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:23:56 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/02 22:25:39 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		minlen(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
		i++;
	return (i + 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int l;

	l = minlen(s1, s2);
	i = 0;
	while (i < l)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				t = argv[i];
				argv[i] = argv[j];
				argv[j] = t;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
