/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:17:19 by eamaral-          #+#    #+#             */
/*   Updated: 2025/10/29 13:50:43 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*ptr;

	cc = (char) c;
	ptr = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			ptr = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		ptr = (char *) &s[i];
	return (ptr);
}
