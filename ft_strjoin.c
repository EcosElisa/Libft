/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:52:48 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:52:50 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*p;
	int		len1;
	int		len2;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		p = (char *)malloc(len1 + len2 + 1);
		if (!p)
			return (NULL);
		i = -1;
		while (s1[++i])
			p[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			p[len1] = s2[i];
			len1++;
		}
		p[len1] = '\0';
		return (p);
	}
	return (NULL);
}
