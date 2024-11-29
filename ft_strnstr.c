/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:25:08 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:40:59 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int		valid;
	size_t	i;
	size_t	k;
	size_t	n;

	n = ft_strlen(to_find);
	if (n == 0)
		return (str);
	i = -1;
	while (str[++i] != '\0' && (size_t)ft_strlen(str) >= n && i < n && i < len)
	{
		k = -1;
		valid = 1;
		while (to_find[++k] != '\0' && str[i + k] != '\0')
		{
			if (str[i + k] != to_find[k])
			{
				valid = 0;
				break ;
			}
		}
		if (valid > 0 && k == n)
			return (&str[i]);
	}
	return (0);
}
