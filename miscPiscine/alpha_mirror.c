/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:07:20 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/09 00:12:22 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		alphamirror(*str)
{


int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 3);
	while (*argv)
	{
		alphamirror(*argv)
		argv++;
	}

