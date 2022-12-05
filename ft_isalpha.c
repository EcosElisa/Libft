/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esobrinh <esobrinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:44:24 by esobrinh          #+#    #+#             */
/*   Updated: 2022/10/14 02:44:26 by esobrinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if ((argument >= 'A' && argument <= 'Z')
		|| (argument >= 'a' && argument <= 'z'))
		return (1);
	else
		return (0);
}
