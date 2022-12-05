/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:58:04 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:58:05 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	l;

	l = ft_strlen(str);
	while (l >= 0)
	{
		if (str[l] == (unsigned char)c)
			return ((char *)&str[l]);
		l--;
	}
	return (NULL);
}
