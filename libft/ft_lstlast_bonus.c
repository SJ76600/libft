/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:01:56 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:49:58 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main()
{
	t_list	*liste;
	liste = NULL;
	int	a;
	int	b;
	int	c;

	a = 1;
	b = 2;
	c = 3;
	liste = ft_lstnew(&a);
	liste->next = ft_lstnew(&c);
	liste->next->next = ft_lstnew(&b);
	t_list	*last = ft_lstlast(liste);
	if (last != NULL)
		printf("le dernier element de la liste: %d\n", *(int*)last->content);
	else
		printf("la liste est vide\n");
	free(liste->next->next);
	free(liste->next);
	free(liste);
	return (0);
}*/