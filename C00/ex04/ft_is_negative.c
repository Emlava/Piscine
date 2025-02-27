/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 10:06:22 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/07 11:16:38 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	if (n >= 0)
	{
		write(1, "P", 1);
	}
}

/*
int	main()
{
	ft_is_negative(2);
	write(1, "\n", 1);
	ft_is_negative(-14);
	write(1, "\n", 1);
	ft_is_negative(-3);
	write(1, "\n", 1);
	return 0;
}
*/
