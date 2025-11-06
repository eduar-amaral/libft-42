/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:51:42 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 20:02:11 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <ctype.h>
#include "libft.h" */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	int in = 32;
	int mine = ft_isprint(in);
	int original = isprint(in);
	printf("ft_isprint(%d) = %d | isprint(%d) = %d\n",
		in, mine, in, original);
	return (0);
}*/