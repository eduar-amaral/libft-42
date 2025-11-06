/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:48:20 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:30:57 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
/*#include <ctype.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(void)
{
	int in = 70;
	int mine = ft_isascii(in);
	int original = isascii(in);
	printf("ft_isascii(%d) = %d | isascii(%d) = %d\n\n", in, mine, in, original);
}*/