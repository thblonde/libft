/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thblonde <thblonde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 21:33:02 by thblonde          #+#    #+#             */
/*   Updated: 2024/04/21 15:52:40 by thblonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		sign;
	size_t		i;
	long int	result;

	sign = 1;
	i = 0;
	result = 0;
	while (((char)str[i] >= 9 && (char)str[i] <= 13) || ((char)str[i] == ' '))
		i++;
	if ((char)str[i] == '+' || (char)str[i] == '-')
	{
		if ((char)str[i] == '-')
			sign *= -1;
		i++;
	}
	while ((char)str[i] >= '0' && (char)str[i] <= '9')
	{
		result = (result * 10) + ((char)str[i] - '0');
		i++;
	}
	return (result * sign);
}
