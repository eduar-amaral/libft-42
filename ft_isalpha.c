/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:43:22 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:30:36 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/
/*#include <ctype.h>*/

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int	main(void)
{
	int in = 'B';
	int mine = ft_isalpha(in);
	int original = isalpha(in);
	printf("ft_isalpha(%d) = %d | isalpha(%d) = %d\n\n", in, mine, in, original);
	return (0);
}*/