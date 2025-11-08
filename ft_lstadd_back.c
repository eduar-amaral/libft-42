/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:43:33 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/08 03:04:44 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	if (last)
		last -> next = new;
}
/*int	main(void)
{
	t_list	*lst;
	
	lst = NULL;
	while (lst)
	{
		ft_putendl_fd((char *)lst->content, 1);
		lst = lst->next;
	}
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 egg")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 pinch of salt")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 slice of bread")));
}*/