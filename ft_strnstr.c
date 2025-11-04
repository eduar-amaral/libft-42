/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:21:48 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/03 21:16:32 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_len;

	if (*little == '\0')
		return ((char *) big);
	l_len = ft_strlen(little);
	i = 0;
	while (big[i] && i + l_len <= len)
	{
		if (ft_strncmp(big + i, little, l_len) == 0)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
