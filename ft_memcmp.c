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

int	ft_memcmp(void *s1, void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] == s2[index] && s1[index] != (void *)0)
	{
		if (++index >= n)
		{
			index--;
			return (s1[index] - s2[index]);
		}
	}
	return (s1[index] - s2[index]);
}
