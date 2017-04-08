/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 22:14:56 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/02 22:21:02 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	ft_rev_params(int argc, char **argv)
{
	int i;

	i = argc;
	while (i <= argc && i >= 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (**argv);
}

int		main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
