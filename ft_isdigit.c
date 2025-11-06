/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:43:15 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 19:59:55 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"
#include <ctype.h> */

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/* int	main(void)
{
	int in = 48;
	int mine = ft_isdigit(in);
	int original = isdigit(in);
	printf("ft_isdigit(%d) = %d | isdigit(%d) = %d\n",
		in, mine, in, original);
	return (0);
} */