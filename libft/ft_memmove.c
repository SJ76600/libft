/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:06:48 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 10:08:08 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char	*nsrc;
	char		*ndst;

	i = 0;
	ndst = (char *)dest;
	nsrc = (const char *)src;
	if (ndst < nsrc)
	{
		while (i < n)
		{
			ndst[i] = nsrc[i];
			i++;
		}
	}
	if (ndst > nsrc)
	{
		while (n > 0)
		{
			ndst[n -1] = nsrc[n - 1];
			n--;
		}
	}
	return (dest);
}

/*int	main()
{
	char src[] = "hello world";
	char dest[50];
	
	printf("%p\n", ft_memmove(dest, src, 2));
	printf("%p\n", memmove(dest, src, 2));
	ft_memmove(dest, src, 2);
	printf("%s\n", dest);
	memmove(dest, src, 2);
	printf("%s\n", dest);
	return (0);
}*/