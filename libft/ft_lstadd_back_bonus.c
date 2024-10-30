/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:40:00 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 15:40:59 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}

/*int	main()
{
	t_list *liste = NULL;
	int	a;
	int	b;
	int	c;

	a = 10;
	b = 20;
	c = 30;
	ft_lstadd_back(&liste, ft_lstnew(&a));
	ft_lstadd_back(&liste, ft_lstnew(&b));
	ft_lstadd_back(&liste, ft_lstnew(&c));
	t_list *current = liste;
	while (current != NULL)
	{
		printf("%d -> ", *(int*)current->content);
		current = current->next;
	}
	printf("NULL\n");
	while (liste != NULL)
	{
		t_list *temp = liste;
		liste = liste->next;
		free(temp);
	}
	return (0);
}*/