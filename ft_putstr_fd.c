/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:29:52 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/09 14:35:22 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

/* int	main(int argc, char **argv)
{
	(void) argc;
	int fc = open(argv[1], O_WRONLY | O_CREAT | O_APPEND , 0644);
	if (fc == -1)
	{
		ft_putendl_fd("Error opening file...", 2);
		return (1);
	}
	ft_putstr_fd("Testing...", fc);
	close(fc);
	return (0);
} */