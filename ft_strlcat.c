/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 09:51:32 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/28 14:49:06 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	len_src_cpy;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	len_src_cpy = len_src;
	if (size > len_dst)
	{
		i = len_dst;
		n = size - len_dst - 1;
		while (n-- && len_src_cpy--)
		{
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
		return (len_dst + len_src);
	}
	return (len_src + size);
}
