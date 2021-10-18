/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:41:39 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/18 16:32:09 by facolomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include <stdlib.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *c);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	int		c[6];
	int		i;
	int		ret_ft;
	int		ret_c;
	int		test_success;
	int		ret_strcmp;
	char	str1[25];
	char	str2[25];
	char	*ret_str_ft;
	char	*ret_str_c;
	char	ncmp1[10];
	char	ncmp2[10];
	char	ncmp3[10];
	char	ncmp4[10];
	char	*dst_ft;
	char	*dst_c;
	char 	*src;

	i = 0;
	test_success = 0;
	c[0] = 'G';
	c[1] = 'y';
	c[2] = '+';
	c[3] = '5';
	c[4] = 129;
	c[5] = 200;
	strcpy(str1, "Les pommes, c'est bon");
	strcpy(str2, "Les bons tests");
	strcpy(ncmp1, "abcdef");
	strcpy(ncmp2, "adcgfed");
	strcpy(ncmp3, "zyxwvu");
	strcpy(ncmp4, "abcdef");
	strcpy(src, "42 cpy bonjour");
	dst_ft = malloc(15 * sizeof(char));
	dst_c = malloc(15 * sizeof(char));
	//Test isalpha
	printf("/******Test isalpa******\\\n");
	while (i < 4)
	{
		ret_ft = ft_isalpha(c[i]);
		ret_c = isalpha(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 4)
		printf("ft_isalpha : OK\n");
	else
		printf("ft_isalpha : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	//Test isdigit
	printf("/******Test isdigit******\\\n");
	while (i < 4)
	{
		ret_ft = ft_isdigit(c[i]);
		ret_c = isdigit(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 4)
		printf("ft_isdigit : OK\n");
	else
		printf("ft_isdigit : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	//Test isalnum
	printf("/******Test isalnum******\\\n");
	while (i < 4)
	{
		ret_ft = ft_isalnum(c[i]);
		ret_c = isalnum(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 4)
		printf("ft_isalnum : OK\n");
	else
		printf("ft_isalnum : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	//Test isascii
	printf("/******Test isascii******\\\n");
	while (i < 6)
	{
		ret_ft = ft_isascii(c[i]);
		ret_c = isascii(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 6)
		printf("ft_isascii : OK\n");
	else
		printf("ft_isascii : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	//Test isprint
	printf("/******Test isprint******\\\n");
	while (i < 6)
	{
		ret_ft = ft_isprint(c[i]);
		ret_c = isprint(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 6)
		printf("ft_isprint : OK\n");
	else
		printf("ft_isprint : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	//Test strlen
	printf("/******Test strlen******\\\n");
	ret_ft = ft_strlen(str1);
	ret_c = strlen(str1);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_strlen(str2);
	ret_c = strlen(str2);
	if (ret_ft == ret_c)
		test_success++;
	if (test_success == 2)
		printf("ft_strlen : OK\n");
	else
		printf("ft_strlen : test failed\n");
	//Reset value
	test_success = 0;
	//Test toupper
	printf("/******Test toupper******\\\n");
	while (i < 4)
	{
		ret_ft = ft_toupper(c[i]);
		ret_c = toupper(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 4)
		printf("ft_toupper : OK\n");
	else
		printf("ft_toupper : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	c[1] = 'y';
	//Test tolower
	printf("/******Test tolower******\\\n");
	while (i < 4)
	{
		ret_ft = ft_tolower(c[i]);
		ret_c = tolower(c[i]);
		if (ret_ft == ret_c)
			test_success++;
		i++;
	}
	if (test_success == 4)
		printf("ft_tolower : OK\n");
	else
		printf("ft_tolower : test failed\n");
	//Reset value
	i = 0;
	test_success = 0;
	c[0] = 'G';
	//Test strchr
	printf("/******Test strchr******\\\n");
	ret_str_ft = ft_strchr(str1, 's');
	ret_str_c = strchr(str1, 's');
	if (ret_str_ft == ret_str_c)
		test_success++;
	ret_str_ft = ft_strchr(str2, 't');
	ret_str_c = strchr(str2, 't');
	if(ret_str_ft == ret_str_c)
		test_success++;
	if(test_success == 2)
		printf("ft_strchr : OK\n");
	else
		printf("ft_strchr : test failed\n");
	//Reset value
	test_success = 0;
	//Test strrchr
	printf("/******Test strrchr******\\\n");
	ret_str_ft = ft_strrchr(str1, 's');
	ret_str_c = strrchr(str1, 's');
	if (ret_str_ft == ret_str_c)
		test_success++;
	ret_str_ft = ft_strrchr(str2, 't');
	ret_str_c = strrchr(str2, 't');
	if(ret_str_ft == ret_str_c)
		test_success++;
	if(test_success == 2)
		printf("ft_strrchr : OK\n");
	else
		printf("ft_strrchr : test failed\n");
	//Reset value
	test_success = 0;
	//Test strncmp
	printf("/******Test strcmp******\\\n");
	ret_ft = ft_strncmp(ncmp1, ncmp2, 5);
	ret_c = strncmp(ncmp1, ncmp2, 5);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_strncmp(ncmp1, ncmp3, 6);
	ret_c = strncmp(ncmp1, ncmp3, 6);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_strncmp(ncmp1, ncmp4, 3);
	ret_c = strncmp(ncmp1, ncmp4, 3);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_strncmp(ncmp2, ncmp4, 5);
	ret_c = strncmp(ncmp2, ncmp4, 5);
	if (ret_ft == ret_c)
		test_success++;
	if(test_success == 4)
		printf("ft_strncmp : OK\n");
	else
		printf("ft_strncmp : test failed\n");
	//Reset value
	test_success = 0;
	//Test strlcpy
	printf("/******Test strlcpy******\\\n");
	ret_ft = ft_strlcpy(dst_ft, src, 10);
	ret_c = strlcpy(dst_c, src, 10);
	ret_strcmp = strcmp(dst_ft, dst_c);
	if (ret_ft == ret_c && ret_strcmp == 0)
		printf("ft_strlcy : OK\n");
	else
	{
		if (ret_strcmp != 0)
			printf("chaine de characteres incorrect");
		else
			printf("taille retournee inccorect");
		printf("ft_strlcpy : test failed\n");
	}
	//Test strlcat
	printf("/******Test strlcar******\\\n");
	free(dst_ft);
	free(dst_c);
	return (0);
}
