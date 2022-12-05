/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:44:18 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:44:22 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;

	src1 = (unsigned char *)src;
	i = 0;
	if ((unsigned char *)dst == NULL && src1 == NULL)
		return (NULL);
	if ((unsigned char *)dst > src1)
	{
		while (n > 0)
		{
			((unsigned char *)dst)[n - 1] = src1[n -1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = (src1)[i];
			i++;
		}
	}
	return ((unsigned char *)dst);
}
