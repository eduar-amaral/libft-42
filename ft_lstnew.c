/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:02:29 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/06 20:32:39 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/* int	main(void)
{
	t_list	*n1 = ft_lstnew("Hello");
	t_list	*n2 = ft_lstnew(" World!");
	n1->next = n2;
	
	printf("%s", (char *)n1->content);
	printf("%s", (char *)n2->content);
	return (0);
} */