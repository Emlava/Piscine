/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabun <ebabun@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:07:06 by ebabun            #+#    #+#             */
/*   Updated: 2025/02/23 15:22:05 by ebabun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	char	*input;
	char	*nbr_str;

	if (ac < 2 || ac > 3)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (ac == 2)
		input = av[1];
	if (ac == 3)
		input = av[2];
	if (!check_digit(input))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	nbr_str = ft_store_nbr(input);
	if (nbr_str == NULL)
		return (1);
	ft_putstr(nbr_str);
	write(1, "\n", 1);
	return (0);
}
