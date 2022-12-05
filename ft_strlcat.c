/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:54:10 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 02:16:03 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t destsize)
{
	size_t	d;
	size_t	i;
	size_t	r;

	d = ft_strlen(dst);
	i = 0;
	if (destsize <= d)
		return (destsize + ft_strlen(src));
	r = ft_strlen(dst) + ft_strlen(src);
	while (src[i] != '\0' && d + 1 < destsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (r);
}
