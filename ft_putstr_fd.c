/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:21:08 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/22 10:37:40 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		write(fd, "\0", 1);
	else
	{
		while(s[i] != '\0')
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
