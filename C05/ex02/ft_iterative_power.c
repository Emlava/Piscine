/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:03:49 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/20 12:40:44 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	orig_nb;

	orig_nb = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * orig_nb;
		power--;
	}
	return (nb);
}

/*#include <stdio.h>

void	main()
{
	int number = 4;
	int power = 2;

	printf("%d^%d = %d\n", number, power, ft_iterative_power(number, power));
}*/
