/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:05:45 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:10:20 by eamaral-         ###   ########.fr       */
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
	char testmine[5] = "4321";
	char testori[5]  = "4321";

	printf("Before ft_memset = \"%s\" | Before memset = \"%s\"\n",
		testmine, testori);
	ft_memset(testmine, '*', 4);
	memset(testori, '*', 4);
	printf("After  ft_memset = \"%s\" | After  memset = \"%s\"\n\n",
		testmine, testori);
}*/