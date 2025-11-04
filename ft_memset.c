/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:05:45 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/03 21:15:56 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *) s;
	while (n--)
		*str++ = (unsigned char) c;
	return (s);
}

/*int	main(void)
{
	char	test[4] = "abc";
	
	printf("Before ft_memset -> %s\n", test);
	//memset(test, 'A', 4);
	ft_memset(test, 65, 3);
	printf("After ft_memset -> %s\n", test);
	return (0);
}*/