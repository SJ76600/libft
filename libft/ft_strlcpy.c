/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:06:16 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 10:11:40 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;

	i = 0;
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (lensrc);
}
/*int main()
{
	char    *str = "bomjour";
	//char    *str1 = "bomjour";
	char    dst[20];

	printf("%ld\n", ft_strlcpy(dst, str, 6));
	//printf("%ld\n", strlcpy(dst, str1, 10));
	return (0);
}*/
