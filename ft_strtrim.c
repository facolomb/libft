/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:17:02 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/15 13:25:34 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*fr_strtrim(char const *s1, char const *s2)
{
	
}

int	main(void)
{
	char	s1[20];
	char	*str;

	strcpy(s1, "Les pommes c'est bon");
	str = ft_strtrim(s1, "es");
	printf("str :%s\n", str);
	return (0);
}
