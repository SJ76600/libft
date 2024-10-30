/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:01:50 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 14:44:16 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;
	unsigned char	*nsrc;
	size_t			i;

	i = 0;
	ndest = (unsigned char *)dest;
	nsrc = (unsigned char *)src;
	if (nsrc == NULL && ndest == NULL)
		return (NULL);
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	ndest = 0;
	return (dest);
}
/*int	main()
{
	char	src[] = ">3Ixnb";
	char	dest[50];
	
	printf("%s\n", src);
	printf("%p\n", ft_memcpy(dest, src, 41));
	printf("%p\n", memcpy(dest, src, 41));
	ft_memcpy(dest, src, 41);
	printf("%s\n", dest);
	memcpy(dest, src, 41);
	printf("%s\n", dest);
	return (0);
}*/