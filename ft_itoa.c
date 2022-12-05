/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 01:34:52 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 01:34:56 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_ptr(int size, int i, int n, char *ptr)
{
	while (size > i)
	{
		ptr[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*ptr;

	i = 0;
	size = ft_get_size(n);
	ptr = (char *)malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (0);
	if (n == -2147483648)
	{
		ptr[0] = '-';
		ptr[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		ptr[0] = '-';
		i = 1;
		n = -n;
	}
	ft_fill_ptr(size, i, n, ptr);
	ptr[size] = '\0';
	return (ptr);
}
