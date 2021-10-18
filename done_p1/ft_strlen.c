/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:36:25 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/18 11:41:16 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

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
