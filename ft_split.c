/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:14:41 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 14:25:31 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *c);

char	**ft_split(char const *s, char c)
{
	char 	**str;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!s || !c)
		return (NULL);
	str = malloc(ft_strlen(s) * sizeof(char*) + 1);
	if (!str)
		return (NULL);
	while(*s != '\0')
	{
		while(*s != c)
		{
			str[i][x] = *s;
			s++;
			x++;
		}
		str[i][x] = '\0';
		i++;
		x = 0;
	}
	return (str);
}
