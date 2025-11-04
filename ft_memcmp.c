/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:20:42 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/03 21:15:29 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*sptr1;
	unsigned const char	*sptr2;

	sptr1 = s1;
	sptr2 = s2;
	while (n--)
	{
		if (*sptr1 != *sptr2)
			return (*sptr1 - *sptr2);
		sptr1++;
		sptr2++;
	}
	return (0);
}
