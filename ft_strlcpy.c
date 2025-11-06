/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:20:38 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:29:52 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <bsd/string.h>*/
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (src_len);
}

/*int	main(void)
{
	char minesrc[13] = "Hello World!";
	char minedst[13];
	char orisrc[13]  = "Hello World!";
	char oridst[13];

	size_t r1 = ft_strlcpy(minedst, minesrc, sizeof(minedst));
	size_t r2 = strlcpy(oridst, orisrc, sizeof(oridst));

	printf("ft_strlcpy = %zu | strlcpy = %zu\n", r1, r2);
	printf("ft_strlcpy dest -> %s | strlcpy dest -> %s\n\n",
		minedst, oridst);
}*/