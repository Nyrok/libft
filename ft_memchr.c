/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:48:32 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:50:17 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return ((void *)0);
}
