/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:49:11 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 16:01:36 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*dptr;

	sptr = (const unsigned char *) src;
	dptr = (unsigned char *) dst;
	if (dptr > sptr && dptr < sptr + n)
		while (n--)
			dptr[n] = sptr[n];
	else
		while (n--)
			*dptr++ = *sptr++;
	return (dst);
}

/*int	main(void)
{
	char testmine[6] = "abcde";
	char testori[6]  = "abcde";

	printf("Before ft_memmove -> %s | Before memmove -> %s\n",
		testmine, testori);
	ft_memmove(testmine + 2, testmine, 3);
	memmove(testori + 2, testori, 3);
	printf("After  ft_memmove -> %s | After  memmove -> %s\n",
		testmine, testori);
}*/