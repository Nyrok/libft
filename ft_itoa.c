/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <hkonte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:13:55 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/29 13:14:27 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strrev(char *str)
{
	char	*result;
	int		i;
	int		n;

	result = ft_strdup(str);
	i = 0;
	n = ft_strlen(str) - 1;
	while (str[n])
	{
		result[i++] = str[n--];
	}
	result[i] = '\0';
	free(str);
	return (result);
}

char	*ft_itoa(int n)
{
	long int	val;
	char		*result;
	int			is_negative;
	int			i;

	is_negative = n < 0;
	if (is_negative)
		val = -(long int)n;
	else
		val = (long int)n;
	result = ft_calloc(11 + is_negative, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if (val == 0)
		result[i++] = '0';
	while (val > 0)
	{
		result[i++] = '0' + (val % 10);
		val /= 10;
	}
	if (is_negative)
		result[i++] = '-';
	result[i] = '\0';
	return (ft_strrev(result));
}
