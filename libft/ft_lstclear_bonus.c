/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:28:37 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:15 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*int	main()
{
	t_list *liste = NULL;

	liste = ft_lstnew(strdup("Premier"));
	liste->next = ft_lstnew(strdup("Deuxieme"));
	liste->next->next = ft_lstnew(strdup("Troisieme"));
	printf("Liste initiale: ");
	print_list(liste);

	ft_lstclear(&liste, ft_del_content);
	printf("Apres la suppression la liste est: ");
	print_list(liste);
	return (0);
}*/