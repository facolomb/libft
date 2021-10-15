/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:56:49 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/14 15:10:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ret;
	size_t	i;

	ret = (char *) s;
	i = 0;
	while (*ret != '\0' && i < n)
	{
		if (*ret == c)
		{
			return (ret);
		}
		ret++;
		i++;
	}
	return (0);
}
