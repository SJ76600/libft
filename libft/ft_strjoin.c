/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:54:10 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 10:11:03 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strj;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strj = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (strj == NULL)
		return (NULL);
	ft_memcpy(strj, s1, len1);
	ft_memcpy((strj + len1), s2, (len2 + 1));
	strj[len1 + len2] = '\0';
	return (strj);
}

/*int	main()
{
	char s1[50] = "Hello ";
	char s2[50] = "world!";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/