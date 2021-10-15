/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:25:44 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/14 14:42:19 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		found;
	int		to_found;
	
	i = 0;
	to_found = ft_strlen(needle);
	if (needle == NULL)
		return ((char *)src);
	while (*haystack != '\0' || i < len)
	{
		//TO DO
	}
	return (NULL);
}

int	main(void)
{
	const char	*str = "Les pommes c'est bon";
	const char	*toFind = "est";
	char		*ptr_str;
	char		*ptr_ft;

	ptr_str = strnstr(str, toFind, 20);
	ptr_ft = ft_strnstr(str, toFind, 20);
	printf("str :%s\n", ptr_str);
	printf("ft :%s\n", ptr_ft);
}
