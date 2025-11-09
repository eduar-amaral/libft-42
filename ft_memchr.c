/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:08:19 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/08 14:25:35 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sptr;

	sptr = (unsigned char *) s;
	while (n--)
	{
		if (*sptr == (unsigned char) c)
			return ((void *)sptr);
		sptr++;
	}
	return (NULL);
}

/* int	main(void)
{
	const	char *str;
	void	*result;

	str = "hello";
	result = ft_memchr(str, 'h', strlen(str));
	if (result)
		printf("Test 1 Passed: Found chr at position %ld\n",
			(const char *)result - str);
	else
		printf("Test 1 Failed: chr was not found\n");
	return (0);
} */