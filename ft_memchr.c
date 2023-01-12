/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:56:49 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/28 14:43:17 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ret;
	size_t	i;

	if (n == 0)
		return (NULL);
	ret = (char *) s;
	i = 0;
	while (i < n)
	{
		if (*ret == (char)c)
			return (ret);
		ret++;
		i++;
	}
	if (c == '\0')
		return (ret);
	return (NULL);
}
