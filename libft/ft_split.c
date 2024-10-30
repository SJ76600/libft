/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjupille <sjupille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:36:20 by sjupille          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:38 by sjupille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwd(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
			word++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (word);
}

static char	*ft_strndup(const char *s, int size)
{
	int		i;
	char	*str;

	str = malloc((sizeof(char) * size + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] && i < size)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	free_tab(char ***tab, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free((*tab)[i]);
		i++;
	}
	free(*tab);
}

static int	ft_tab(const char *s, int size, char c)
{
	while (s[size] != c && s[size])
	{
		size++;
	}
	return (size);
}

char	**ft_split(const char *s, char c)
{
	int		counter;
	int		size;
	char	**tab;

	counter = 0;
	tab = malloc(sizeof(char *) * (ft_countwd(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			size = 0;
			size = ft_tab(s, size, c);
			tab[counter] = ft_strndup(s, size);
			if (tab[counter] == NULL)
				return (free_tab(&tab, counter), NULL);
			s = s + size;
			counter++;
		}
	}
	tab[counter] = NULL;
	return (tab);
}

/*int	main()
{
	char	str[] = "xxxtoutxceci estxtres logiquexxx!";
	char **tab = ft_split(str, 'x');
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/