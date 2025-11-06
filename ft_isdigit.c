/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:43:15 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:31:06 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int	main(void)
{
	int in = '0';
	int mine = ft_isdigit(in);
	int original = isdigit(in);
	printf("ft_isdigit(%d) = %d | isdigit(%d) = %d\n\n", in, mine, in, original);
	return (0);
}*/