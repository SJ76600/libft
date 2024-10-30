/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:54:37 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:57:23 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	*ft_transform_and_print(void *content)
{
	int	*value;
	int	*new_value;

	value = (int *)content;
	printf("%d\n", *value);

	new_value = malloc(sizeof(int));
	if (new_value == NULL)
		return (NULL);
	*new_value = (*value) * 2 + 1;
	return (new_value);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(NULL);
		if (tmp == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		tmp->content = f(lst->content);
		ft_lstadd_back(&head, tmp);
		lst = lst -> next;
	}
	return (head);
}
