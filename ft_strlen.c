/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:55:29 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 23:04:14 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	const char *str = "Test";
	size_t mine = ft_strlen(str);
	size_t ori = strlen(str);
	printf("ft_strlen(\"%s\") = %zu | strlen(\"%s\") = %zu\n\n",
		str, mine, str, ori);
}*/