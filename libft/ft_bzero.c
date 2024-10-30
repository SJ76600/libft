/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:00:47 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 12:16:36 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*int	main()
{
	char  str[] = "hello world";
	char  str1[] = "hello world";

	ft_bzero(str, 4);
	int i = 0;
	while (i < 11)
	{
		if (str[i] == 0)
			printf("0");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("%s\n", str);

	bzero(str1, 4);
	int j;
	j = 0;
	while (j < 11)
	{
		if (str1[j] == 0)
			printf("0");
		else
			printf("%c", str1[j]);
		j++;
	}
	printf("%s\n", str1);
	return (0);
}*/