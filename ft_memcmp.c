/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:07:59 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:54:22 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(char *)(s1 + i) == *(char *)(s2 + i) && (char *)(s1 + i) != NULL)
	{
		if (++i >= n)
		{
			i--;
			return (*(char *)(s1 + i) - *(char *)(s2 + i));
		}
	}
	return (*(char *)(s1 + i) - *(char *)(s2 + i));
}
