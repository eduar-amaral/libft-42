/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 14:44:07 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 19:53:36 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*int	main(void)
{
	int in = 65;
	int mine = ft_isalnum(in);
	int original = isalnum(in);
	printf("ft_isalnum(%d) = %d | isalnum(%d) = %d\n",
		in, mine, in, original);
	return (0);
}*/