/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:20:16 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 14:59:19 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c);
static void		*ft_free_split(char **split, size_t j);
static char		**ft_fill_split(char **split, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!split)
		return (NULL);
	return (ft_fill_split(split, s, c));
}

static char	**ft_fill_split(char **split, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j++])
				return (ft_free_split(split, j - 1));
		}
	}
	split[j] = NULL;
	return (split);
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	*ft_free_split(char **split, size_t j)
{
	while (j--)
		free(split[j]);
	free(split);
	return (NULL);
}
/* int main(void)
{
	char	**res;
	size_t	i;
	
	res = ft_split("Hello world this is a test", ' ');
	if (!res)
	{
		ft_putendl_fd("Allocation failed...", 2);
		return (1);
	}
	while (res[i])
	{
		printf("Word %d: \"%s\"\n", i, res[i]);
		free(res[i]);
		i++;
	}
	return (0);
} */