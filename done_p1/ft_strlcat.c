/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:51:32 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/14 11:31:58 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *c);

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	n;
	int		i;
	int		len_dst;
	int		len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	n = 0;
	i = 0;
	while (dst[n] != '\0')
		n++;
	while (n < size - 1)
	{
		dst[n] = src[i];
		n++;
		i++;
	}
	dst[n] = '\0';
	return (len_dst + len_src);
}
