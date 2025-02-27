/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:00:46 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/08 16:41:59 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;
	int	temp1;

	temp = *a / *b;
	temp1 = *a % *b;
	*a = temp;
	*b = temp1;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 15;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("Quotient: %d, Remainder: %d\n", x, y);
	return (0);
}*/
