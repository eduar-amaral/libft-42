/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:14:34 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 14:34:49 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else
		ft_putchar_fd(nbr + '0', fd);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int fc = open(argv[1], O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fc == -1)
	{
		ft_putendl_fd("Error opening file...", 2);
		return (1);
	}
	ft_putnbr_fd(-1234, fc);
	ft_putchar_fd('\n', fc);
	close(fc);
	return (0);
} */