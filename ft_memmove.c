/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:27:31 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:42:56 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	size_t	i;
	void	*tmp;

	i = 0;
	while ((char *)(dest + i) != (void *)0 && (char *)(src + i) != (void *)0 && i < n)
	{
		tmp = (char *)(src + i);
		*(char *)(dest + i) = *(char *)tmp;
		i++;
	}
	return (dest);
}
