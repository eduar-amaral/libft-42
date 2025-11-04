/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:49:11 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/03 21:15:45 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*dptr;

	if (!dst && !src)
		return (NULL);
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
