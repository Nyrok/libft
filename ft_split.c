/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <hkonte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:27:31 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/15 14:46:50 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count(const char *s, const char c)
{
	int	i;
	int	new_word;
	int	count;

	i = 0;
	new_word = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && !new_word)
		{
			new_word = 1;
		}
		else if (s[i] != c && new_word)
		{
			new_word = 0;
			count++;
		}
		i++;
	}
	return (count);
}

char	**ft_alloc(int count)
{
	char	**result;
	int		i;

	result = malloc(1 + count * sizeof(char *));
	if (!result)
	{
		result = malloc(1);
		result[0] = NULL;
		return (result);
	}
	i = 0;
	while (i < count)
	{
		result[i] = malloc(32 * sizeof(char));
		if (!result[i])
		{
			result = malloc(1);
			result[0] = NULL;
			return (result);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

void	ft_split_exec(const char *s, const char c, char **result)
{
	int	i;
	int	j;
	int	new_word;
	int count;

	i = 0;
	j = 0;
	new_word = 1;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && !new_word)
		{
			new_word = 1;
			result[count][j] = '\0';
			j = 0;
			count++;
		}
		else if (s[i] != c)
		{
			new_word = 0;
			result[count][j] = s[i];
			j++;
		}
		i++;
	}
}

char	**ft_split(const char *s, const char c)
{
	char	**result;

	result = ft_alloc(ft_count(s, c));
	if (!result[0])
		return (result);
	ft_split_exec(s, c, result);
	return (result);
}
