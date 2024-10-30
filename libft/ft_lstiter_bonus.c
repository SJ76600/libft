/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:19:25 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:51:41 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static void	print_int(void *f)
{
	int	*value;

	value = (int *)f;
	printf("la valeur est: %d\n", *value);
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main(void)
{
	t_list *lst;
	lst = malloc(sizeof(t_list));
	if(lst == NULL)
		return (1);
	int *value;
	value = malloc(sizeof(int));
	if (value == NULL)
	{
		free(lst);
		return (1);
	}
	*value = 42;
	lst->content = value;
	lst->next = NULL;

	ft_lstiter(lst, &print_int);
	free(value);
	free(lst);
	return(0);
}*/