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
	size_t	i;
	size_t	k;
	size_t	n;

	n = ft_strlen(to_find);
	i = 0;
	if (n == 0)
		return (str);
	if (str[i] != '\0' && len < n)
		return (0);
	while (str[i] != '\0' && i < len)
	{
		k = 0;
		while (i + k < len && str[i + k] && to_find[k] == str[i + k])
			k++;
		if (to_find[k - 1] == str[i + k - 1] && k == n)
			return (&str[i]);
		i++;
	}
	return (0);
}
