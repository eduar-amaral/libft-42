/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:34:38 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/07 14:03:29 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	
	n1 = ft_lstnew("Arroz");
	n2 = ft_lstnew(" de");
	n3 = ft_lstnew(" pato");
	n1->next = n2;
	n2->next = n3;
	printf("%s", (char *)ft_lstlast(n1)->content);
	ft_lstclear(&n1, free);
	return (0);
} */