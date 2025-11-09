/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:35:22 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 14:06:41 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		len;
	size_t		i;
	char		*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* char to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
	}

int	main(void)
{
	char	*mapi;
	char	*res;
	
	mapi = "Hello world, this is a test...";
	res = ft_strmapi(mapi, to_upper);
	if (!res)
	{
		ft_putendl_fd("Allocation failed...", 2);
		return (1);
	}
	printf("Original str: %s\n", mapi);
	printf("Result of mapi: %s\n", res);
	free(res);
	return (0);
} */