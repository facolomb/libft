/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:19:55 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/15 11:15:03 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
size_t	ft_strlen(const char *c)
{
	size_t	x;

	x = 0;
	while (c[x] != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = malloc(str_len * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		str[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		str[i] = *s2++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	s1[12];
	char	s2[10];
	char	*str;

	strcpy(s1, "Les pommes ");
	strcpy(s2, "c'est bon");
	str = ft_strjoin(s1, s2);
	printf("str :%s\n", str);
	free(str);
	return (0);
}
