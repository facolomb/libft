/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:19:21 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 15:25:31 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlen(const char *c);

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = ft_strlen(s1);
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len + 1);
	return (str);
}
