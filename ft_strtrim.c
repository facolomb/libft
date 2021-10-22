/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:17:02 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 09:00:16 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(const char *c);

char	*ft_strtrim(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (*s1++ != '\0')
	{
		if (*s1 != s2[x])
			str[i++] = *s1;
		else
		{
			while (*s1++ == s2[x])
				x++;
			x = 0;
		}
	}
	str[i] = '\0';
	return (str);
}
