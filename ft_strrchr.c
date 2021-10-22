/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:27:59 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 15:26:11 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	ret = NULL;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			ret = (char *)str;
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (ret);
}
