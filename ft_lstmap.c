/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamaral- <eamaral-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 02:06:48 by eamaral-          #+#    #+#             */
/*   Updated: 2025/11/08 02:53:20 by eamaral-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	new_list = NULL;
	if (!f)
		return (NULL);
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}

/*static void	*dupper(void *c)
{
	char	*src;
	char	*dst;
	char	*i;

	src = (char *)c;
	if (!src)
		return (NULL);
	dst = ft_strdup(src);
	if (!dst)
		return (NULL);
	i = dst;
	while (*i)
	{
		*i = (char)ft_toupper((unsigned char)*i);
		i++;
	}
	return ((void *)dst);
}

static void	freeza(void *c)
{
	free(c);
}

static void	lstprinter(t_list *lst, const char *s)
{
	ft_putendl_fd((char *)s, 1);
	while (lst)
	{
		ft_putendl_fd((char *)lst->content, 1);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*lst;
	t_list	*mapi;
	
	lst = NULL;
	mapi = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 egg")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 pinch of salt")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("1 slice of bread")));
	lstprinter(lst, "Egg Toast recipe:");
	mapi = ft_lstmap(lst, dupper, freeza);
	if (!mapi)
	{
		ft_putendl_fd("< Allocation failed >", 2);
		ft_lstclear(&lst, freeza);
		return (1);
	}
	lstprinter(mapi, "NOW UPPER CASE");
	ft_lstclear(&lst, freeza);
	ft_lstclear(&mapi, freeza);
}*/