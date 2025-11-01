/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:40:17 by eamaral-          #+#    #+#             */
/*   Updated: 2025/10/28 17:08:09 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	if (!src && !dest)
		return (dest);
	ptr_dest = (unsigned char *) dest;
	ptr_src = (unsigned char *) src;
	while (len > 0)
	{
		*(ptr_dest++) = *(ptr_src++);
		len--;
	}
	return (dest);
}
