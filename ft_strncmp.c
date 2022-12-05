/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:56:36 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 02:17:45 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;
	size_t	size;

	if (count == 0)
		return (0);
	size = count - 1;
	i = 0;
	while ((i < size) && (str1[i] == str2[i]) && (str1[i] != '\0')
		&& (str2[i] != '\0'))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
