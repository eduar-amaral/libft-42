/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:55:01 by eamaral-          #+#    #+#             */
/*   Updated: 2025/10/30 14:18:52 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ct, size_t size)
{
	unsigned char	*dst;

	if (!ct || !size)
		return (malloc(0));
	if (ct > (SIZE_MAX / size))
		return (NULL);
	dst = malloc(ct * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, ct * size);
	return (dst);
}
