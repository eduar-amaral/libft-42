/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 20:07:31 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/10 14:48:18 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int fc = open(argv[1], O_RDWR | O_CREAT | O_APPEND, 0644);
	if (fc == -1)
	{
		ft_putendl_fd("Error opening file...", 2);
		return (1);
	}
	ft_putendl_fd("Testing...", fc);
	close(fc);
	return (0);
} */