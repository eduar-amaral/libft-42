/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:11:35 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 17:39:07 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (!nmemb || !size)
		return (ft_strdup(""));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	dst = malloc(nmemb * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, nmemb * size);
	return (dst);
}
/* int	main(void)
{
	char	*str;
	char	*str2;

	str2 = " World!";
	str = "Hello";
	printf("Before ft_calloc: %s | Before calloc: %s\n",
		str, str2);
	str2 = (char *)calloc(7, 1);
	str = (char *)ft_calloc(5, 1);
	if (!str || !str2)
	{
		printf("Error during memory allocation.\n");
		return (1);
	}
	printf("After ft_calloc: \"%s\" | After calloc: \"%s\"\n",
		str, str2);
	free(str);
	free(str2);
	return (0);
} */