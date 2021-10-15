/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:31:22 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/13 15:46:04 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char *) str;
	while (i < len)
	{
		ret[i] = c;
		i++;
	}
	return (ret);
}
