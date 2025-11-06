/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:35:40 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/05 19:12:35 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*int	main(void)
{
	char testmine[18] = "Null here -> 1234";
	char testori[18]  = "Null here -> 1234";

	printf("Before ft_bzero = \"%s\" | Before bzero = \"%s\"\n",
		testmine, testori);
	ft_bzero(testmine + 13, 4);
	bzero(testori + 13, 4);
	printf("After  ft_bzero = \"%s\" | After  bzero = \"%s\"\n\n",
		testmine, testori);
}*/