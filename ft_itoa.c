/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 13:28:11 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/07 16:49:33 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n);

char	*ft_itoa(int n)
{
	char		*nstr;
	size_t		nbr_len;
	long		nbr;
	size_t		i;

	nbr = n;
	nbr_len = ft_nbrlen(n);
	nstr = (char *)malloc(sizeof(char) * nbr_len + 1);
	if (!nstr)
		return (NULL);
	nstr[nbr_len] = '\0';
	if (nbr == 0)
		nstr[0] = '0';
	if (nbr < 0)
	{
		nstr[0] = '-';
		nbr = -nbr;
	}
	i = nbr_len - 1;
	while (nbr > 0)
	{
		nstr[i--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (nstr);
}

static size_t	ft_nbrlen(int n)
{
	size_t	count;
	long	nbr;

	nbr = n;
	count = 0;
	if (nbr <= 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

/* int	main(void)
{
	printf("Test with positve value: %s\n", ft_itoa(42));
	printf("Test with negative value: %s\n", ft_itoa(-42));
	printf("Test with zero: %s\n", ft_itoa(0));
	printf("Test with minimum int size: %s\n", ft_itoa(-2147483648));
	printf("Test with maximum int size: %s\n", ft_itoa(2147483647));
	printf("Test with maximum int size: %s\n", ft_itoa(10000));
	return (0);
} */