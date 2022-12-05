/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:26:46 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 02:03:54 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'
			|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r'))
	{
		i++;
	}
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] && ft_isdigit(s[i]))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return (sign * num);
}
