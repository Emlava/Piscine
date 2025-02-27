/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebabun <ebabun@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:08:46 by ebabun            #+#    #+#             */
/*   Updated: 2025/02/23 15:22:34 by ebabun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		check_digit(char *str);
int		check_positive(char *str);
int		is_digit(char c);
int		is_space(char c);
int		ft_nbr_len(char *str);
char	*ft_store_nbr(char *input);

#endif
