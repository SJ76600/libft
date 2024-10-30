/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:45:24 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 15:41:18 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int main()
{
    t_list *First;
    t_list *element;
    int *content;
    t_list *current;

    First = NULL;
    element = malloc(sizeof(t_list));
    if (element == NULL)
        return(0);
    content = malloc(sizeof(int));
    if (content == NULL)
        return(0);
    *content = 10;
    element->content = content;
    element->next = NULL;
    ft_lstadd_front(&First, element);
    current = First;
    while (current != NULL)
    {
        printf("%p\n", current->content);
        current = current->next;
        printf("%d\n", *content);
    }
    return (0);
}*/