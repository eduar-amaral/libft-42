/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 21:24:27 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/08 02:58:25 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/*static void	freear(void *ptr)
{
	if (ptr)
		printf("Freeing... \"%s\"\n", (char *)ptr);
	free(ptr);
}

int	main(void)
{
	t_list	*lst;
	
	lst = ft_lstnew(strdup("Testando"));
	if (!lst)
	{
		ft_putendl_fd("Allocation failure...", 2);
		return (1);
	}
	printf("Before ft_lstdelone: %s\n", (char *)lst->content);
	ft_lstdelone(lst, freear);
	lst = NULL;
	printf("After ft_lstdelone: node deleted, lst = %p\n", (void *)lst);
	return (0);
}*/