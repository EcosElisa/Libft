/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:57:14 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 02:18:28 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] != '\0' && i < slen)
	{
		j = 0;
		while (s[i + j] == find[j] && (s[i + j] != '\0')
			&& (find[j] != '\0') && (i + j < slen))
			j++;
		if (j == ft_strlen(find))
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
