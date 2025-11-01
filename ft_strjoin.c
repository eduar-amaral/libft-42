/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:45:06 by eamaral-          #+#    #+#             */
/*   Updated: 2025/10/30 21:18:43 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	pre_len;
	size_t	suf_len;
	char	*nstr;
		
	pre_len = ft_strlen(s1);
	suf_len = ft_strlen(s2);
	nstr = (char *)malloc(sizeof(char) * (pre_len + suf_len) + 1);
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, s1, pre_len + suf_len + 1);
	ft_strlcpy(nstr + pre_len, s2, pre_len + suf_len + 1);
	nstr[pre_len + suf_len] = '\0';
	return (nstr);
}

int main()
{
	char *str = NULL;
	printf("%zu", strlen(str));
	/* char *new = ft_strjoin(NULL, "world");
	printf("%s\n", new);
	free(new); */
	return 0;
}

	