/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:02:50 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 09:49:26 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
static int	ft_nb_len(int nb)
{
	int	len;

	len = 1;
	while (nb > 10)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n < 0)
	{	
		n = n * -1;
		i = ft_nb_len(n) + 1;
		str = malloc(i * sizeof(char) + 1);
		if (!str)
			return (NULL);
		str[0] = '-';
	}
	else
	{
		i = ft_nb_len(n);
		str = malloc(i * sizeof(char) + 1);
		if (!str)
			return (NULL);
	}
	str[i] = '\0';
	i--;
	if (n == 0)
		str[i] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}
