/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:27:20 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 14:44:58 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	if (nmemb * size > 2147483648)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*int	main()
{
	char *str = ft_calloc(25, 50);
	char *str1 = calloc(25,50);
	printf("%p\n", str);
	free(str);
	printf("%p\n", str1);
	free(str1);
	
	return (0);
}*/