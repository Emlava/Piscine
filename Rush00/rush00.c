/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elara-va <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:22:02 by elara-va          #+#    #+#             */
/*   Updated: 2025/02/09 15:19:13 by elara-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.h"

void	ft_print_first_line(int x_pos, int x) // 1st and last lines (x-axis)
{
	if (x_pos == 0 || x_pos == x)
	{
		ft_putchar('o');
		if (x_pos == x)
		{
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar('-');
	}
}

void	ft_print_pipes(int x, int x_pos) // Prints pipes or leaves blank
{
	if (x_pos == 0 || x_pos == x)
	{
		ft_putchar('|');
		if (x_pos == x)
		{
			ft_putchar('\n');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y) // Function to export (overall logic)
{
	int	x_pos;
	int	y_pos;

	x_pos = 0;
	y_pos = 0;
	x = x - 1;
	y = y - 1;
	while (y_pos <= y)
	{
		x_pos = 0;
		while (x_pos <= x)
		{
			if (y_pos == 0 || y_pos == y)
			{
				ft_print_first_line(x_pos, x);
			}
			else
			{
				ft_print_pipes(x, x_pos);
			}
			x_pos++;
		}
		y_pos++;
	}
}
