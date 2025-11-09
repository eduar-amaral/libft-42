/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:20:42 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/07 19:38:04 by eamaral-         ###   ########.fr       */
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
/* int	main(void)
{
	size_t	res;

	res = ft_memcmp("Hello", "Hell", 5);
	printf("%zu\n", res);
	return (0);
} */