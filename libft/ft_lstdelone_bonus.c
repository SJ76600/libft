/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:40 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:13:55 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	ft_del_content(void *content)
{
	free(content);
}*/

/*static void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst->content);
	free (lst);
}

/*int	main()
{
	t_list	*liste;
	t_list	*temp;

	liste = ft_lstnew(strdup("Premier"));
	liste->next = ft_lstnew(strdup("Deuxieme"));
	liste->next->next = ft_lstnew(strdup("Troisieme"));
	printf("Liste initiale : ");
	print_list(liste);

	temp = liste->next;
	liste->next = temp->next;
	ft_lstdelone(temp, ft_del_content);
	printf("Liste apres suppression du deuxieme element: ");
	print_list(liste);

	while (liste != NULL)
	{
		temp = liste;
		liste = liste->next;
		ft_lstdelone(temp, ft_del_content);
	}
	return (0);
}*/