/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmanso <salmanso@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 21:32:32 by salmanso          #+#    #+#             */
/*   Updated: 2021/12/29 23:37:15 by salmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_el;

	if (!lst || !f)
		return (NULL);
	new_el = NULL;
	new_list = NULL;
	while (lst)
	{
		new_el = ft_lstnew ((f)(lst->content));
		if (new_el == NULL)
		{
			ft_lstclear (&lst, del);
			free (new_el);
			return (NULL);
		}
		ft_lstadd_back (&new_list, new_el);
		lst = lst->next;
	}
	return (new_list);
}
