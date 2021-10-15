/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 15:11:16 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/15 08:58:47 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	
}

int	main(void)
{
	char	mem_str[25];
	
	strcpy(mem_str, "Les pommes c'est bon");
	printf("mem_str avant modif :%s\n", mem_str);
	memmove(mem_str, mem_str + 11, 5);
	printf("mem_str apres modif :%s\n", mem_str);
	return (0);
}
