/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:49:51 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:38:58 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode -> content = content;
	newnode -> next = NULL;
	return (newnode);
}

/*int main()
{
	int *data = (int *)malloc(sizeof(int));
	*data = 42;

	t_list *newnode = ft_lstnew(data);
	if (newnode)
	{
		printf("contenu : %d\n", *(int *)newnode->content);
		free(newnode->content);
		free(newnode);
	}
	return (0);
}*/