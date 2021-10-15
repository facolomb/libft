/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:03:19 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/15 10:53:16 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				str_len;
	unsigned int		i;
	
	str = malloc(len * sizeof(char));
	i = 0;
	str_len = 0;
	if(str == NULL)
		return (NULL);
	while (i < start)
	{
		i++;
	}
	while (str_len < len)
	{
		str[str_len] = s[i];
		str_len++;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	s[25];
	char	*str;

	strcpy(s, "");
	str = ft_substr(s, 11, 5);
	printf("str :%s\n", str);
	free(str);
	return (0);
}
