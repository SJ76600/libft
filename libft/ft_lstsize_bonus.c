/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:35:17 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 15:46:09 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

/*int	main()
{
	t_list	*liste;
	int	a;
	int	b;
	int	c;

	a = 1;
	b = 2;
	c = 3;
	liste = ft_lstnew(&a);
	liste->next = ft_lstnew(&b);
	liste->next->next = ft_lstnew(&c);
	printf("la taille de la liste: %d\n", ft_lstsize(liste));
	free(liste->next->next);
	free(liste->next);
	free(liste);
	return (0);
}*/