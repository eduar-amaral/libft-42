/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:44:07 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:30:17 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	return (0);
}

/*int	main(void)
{
	int in = '2';
	int mine = ft_isalnum(in);
	int original = isalnum(in);
	printf("ft_isalnum(%d) = %d | isalnum(%d) = %d\n\n", in, mine, in, original);
}*/