/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:28:53 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:29:17 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n_items, size_t size)
{
	void	*ptr;

	if (n_items == 0 || size == 0)
		return (NULL);
	if ((n_items * size) / size != n_items)
		return (NULL);
	ptr = malloc(n_items * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * n_items);
	return (ptr);
}
