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

#include "libft.h"

static int	ft_word_length(const char *s, const char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s && s[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static int	ft_count(const char *s, const char c)
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

static char	**ft_alloc(int count)
{
	char	**result;
	int		i;
	int		j;

	result = ft_calloc(1 + count, sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < count)
	{
		result[i] = ft_calloc(1024, sizeof(char));
		if (!result[i])
		{
			j = -1;
			while (++j < i)
				free(result[j]);
			free(result);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

static void	ft_split_exec(const char *s, const char c, char **result)
{
	int	i;
	int	j;
	int	new_word;
	int	count;

	i = -1;
	j = 0;
	count = 0;
	new_word = 1;
	while (s[++i])
	{
		if (s[i] == c && !new_word)
		{
			new_word = 1;
			result[count++][j] = '\0';
			j = 0;
		}
		else if (s[i] != c)
		{
			new_word = 0;
			result[count][j++] = s[i];
			if (s[i + 1] == '\0')
				result[count][j] = '\0';
		}
	}
}

char	**ft_split(const char *s, const char c)
{
	char	**result;

	if (s == NULL || ft_strlen(s) == 0)
		return (NULL);
	result = ft_alloc(ft_count(s, c));
	if (!result)
		return (NULL);
	ft_split_exec(s, c, result);
	(void)ft_word_length;
	return (result);
}
