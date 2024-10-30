/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 08:51:02 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 10:08:20 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

/*int	main()
{
	char s1[] = "hello world";
	
	printf("%p\n", ft_memset(s1, 'x', 8));
	printf("%p\n", memset(s1, 'x', 8));
	ft_memset(s1, 'x', 8);
	printf("%s\n", s1);
	memset(s1, 'x', 8);
	printf("%s\n", s1);
	return (0);
}*/