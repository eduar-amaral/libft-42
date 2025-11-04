/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:40:29 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/04 13:12:07 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, s1, len_s1);
	ft_memcpy(nstr + len_s1, s2, len_s2);
	nstr[len_s1 + len_s2] = '\0';
	return (nstr);
}
