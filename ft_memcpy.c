/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:46:00 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:04:21 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*dptr;

	sptr = (const unsigned char *) src;
	dptr = (unsigned char *) dst;
	while (n--)
		*dptr++ = *sptr++;
	return (dst);
}

/*int	main(void)
{
	char inmine_src[4] = "abc";
	char inmine_dst[4] = "cba";
	char inori_src[4]  = "abc";
	char inori_dst[4]  = "cba";

	printf("ft_memcpy -> %s | memcpy -> %s\n\n",
	(char *)ft_memcpy(inmine_dst, inmine_src, 4),
	(char *)memcpy(inori_dst, inori_src, 4));
}*/