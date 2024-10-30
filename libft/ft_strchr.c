/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:28:06 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 13:47:17 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (0);
}

// int	main()
// {
// 	char *str = "";
// 	printf("%s\n", ft_strchr(str, 'o'));
// 	printf("%s\n", strchr(str, 'o'));
// 	return (0);
// }