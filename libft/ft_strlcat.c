/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:12:56 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:31:59 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lensrc;
	size_t	lendst;

	lensrc = ft_strlen(src);
	lendst = 0;
	while (lendst < size && dst[lendst])
		lendst++;
	if (size <= lendst)
		return (size + lensrc);
	i = 0;
	while ((lendst + i + 1) < size && src[i] != '\0')
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}

/*int	main()
{
	char	dst[50] = "hello";
	char	src[50] = "world";
	char	dest[50] = "hello";
	char	source[50] = "world";

	printf("%ld\n", ft_strlcat(dst, src, 0));
	printf("%s\n", dst);
	printf("%ld\n", strlcat(dest, source, 0));
	printf("%s\n", dest);
	return (0);
}*/
