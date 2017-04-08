/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 21:58:10 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/02 21:59:11 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	ft_print_program_name(argv[0]);
	return (0);
}
