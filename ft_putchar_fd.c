/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:14:48 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 14:49:34 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int fd = open(argv[1], O_WRONLY | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
	{
		ft_putendl_fd("Error opening file...", 2);
		return (1);
	}
	ft_putchar_fd('a', fd);
	close(fd);
	return (0);
} */
