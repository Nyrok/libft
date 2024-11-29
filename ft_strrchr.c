/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:39:26 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:29:40 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char c)
{
	unsigned int	i;
	char			*occ;

	i = 0;
	occ = (void *)0;
	while (str[i])
	{
		if (str[i] == c)
			occ = &c;
		i++;
	}
	return (occ);
}
