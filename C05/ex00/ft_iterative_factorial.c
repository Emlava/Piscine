/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:34:34 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/19 18:23:49 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

/*#include <stdio.h>

void	main()
{
	int number = 5;

	printf("!%d = %d\n", number, ft_iterative_factorial(number));
}*/
