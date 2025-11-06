/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:48:20 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 20:01:31 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
#include <ctype.h> */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int	main(void)
{
	int in = 128;
	int mine = ft_isascii(in);
	int original = isascii(in);
	printf("ft_isascii(%d) = %d | isascii(%d) = %d\n",
		in, mine, in, original);
	return (0);
} */