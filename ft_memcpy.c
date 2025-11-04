/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:46:00 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/03 21:15:35 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*sptr;
	unsigned char		*dptr;

	if (!dst && !src)
		return (NULL);
	sptr = (const unsigned char *) src;
	dptr = (unsigned char *) dst;
	while (n--)
		*dptr++ = *sptr++;
	return (dst);
}
