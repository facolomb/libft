/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:27:59 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/18 14:02:51 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;

	while (*str != '\0')
	{
		if (*str == c)
		{
			ret = (char *)str;
		}
		str++;
	}
	if (ret != NULL)
		return (ret);
	return (0);
}
