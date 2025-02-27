/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:24:31 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/08 13:56:53 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	result;
	int	remainder;

	ft_div_mod(35, 2, &result, &remainder);
	printf("Result: %d, Remainder: %d\n", result, remainder);
	return (0);
}*/
