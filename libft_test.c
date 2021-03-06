/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facolomb <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:41:39 by facolomb          #+#    #+#             */
/*   Updated: 2021/10/20 11:01:49 by facolomb         ###   ########.fr       */
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
size_t	ft_strlcat(char *dst, char *src, size_t size);
int	ft_atoi(const char *str);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);

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
	char	ncmp1[10];
	char	ncmp2[10];
	char	ncmp3[10];
	char	ncmp4[10];
	char 	src_lcpy[15];
	char	src_lcat[15];
	char	str1_atoi[15];
	char	str2_atoi[15];
	char	str3_atoi[15];
	char	str1_memchr[15];
	char	str2_memchr[15];
	char	str3_memchr[15];
	char	str1_memcpy[15];
/*	char	str2_memcpy[15];
	char	str3_memcpy[15];*/

	char	*ret_str_ft;
	char	*ret_str_c;
	char	*dst_lcpy_ft;
	char	*dst_lcpy_c;
	char	dst_lcat_ft[25];
	char	dst_lcat_c[25];
	char	*ret_memchr_ft;
	char	*ret_memchr_c;
	char	dst_memcpy_ft[15];
	char	dst_memcpy_c[15];
	char	*ret_memcpy_ft;
	char	*ret_memcpy_c;

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
	strcpy(src_lcpy, "42 cpy bonjour");
	strcpy(src_lcat, "Les pommes, ");
	strcpy(dst_lcat_ft, "c'est bon");
	strcpy(dst_lcat_c, "c'est bon");
	strcpy(str1_atoi, "-12354af54");
	strcpy(str2_atoi, "+658fggr");
	strcpy(str3_atoi, "  2147483647");
	strcpy(str1_memchr, "xoplkfenubcse");
	strcpy(str2_memchr, "LMfdsf3fsdcg");
	strcpy(str3_memchr, "test null");
	strcpy(str1_memcpy, "BxncH38J2u");
/*	strcpy(str2_memcpy, "bJLK0LgZP6");
	strcpy(str3_memcpy, "gSWFGyQCE8");*/
	dst_lcpy_ft = malloc(15 * sizeof(char));
	dst_lcpy_c = malloc(15 * sizeof(char));

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
	ret_ft = ft_strlcpy(dst_lcpy_ft, src_lcpy, 10);
	ret_c = strlcpy(dst_lcpy_c, src_lcpy, 10);
	ret_strcmp = strcmp(dst_lcpy_ft, dst_lcpy_c);
	if (ret_ft == ret_c && ret_strcmp == 0)
		printf("ft_strlcy : OK\n");
	else
	{
		if (ret_strcmp != 0)
			printf("chaine de characteres incorrect\n");
		else
			printf("taille retournee inccorect\n");
		printf("ft_strlcpy : test failed\n");
	}
	//Reset value
	free(dst_lcpy_ft);
	free(dst_lcpy_c);
	//Test strlcat
	printf("/******Test strlcat******\\\n");
	ret_ft = ft_strlcat(dst_lcat_ft, src_lcat, 10);
	ret_c = strlcat(dst_lcat_c, src_lcat, 10);
	ret_strcmp = strcmp(dst_lcat_ft, dst_lcat_c);
	if (ret_ft == ret_c && ret_strcmp == 0)
		printf("ft_strlcat : OK\n");
	else
	{
		if (ret_strcmp != 0)
			printf("Chaine de characters incorrect\n");
		else
			printf("taille retournee incorrect\n");
		printf("ft_strlcat : test failed\n");
	}
	//Test atoi
	printf("/******Test atoi******\\\n");
	ret_ft = ft_atoi(str1_atoi);
	ret_c = atoi(str1_atoi);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_atoi(str2_atoi);
	ret_c = atoi(str2_atoi);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_atoi(str3_atoi);
	ret_c = atoi(str3_atoi);
	if (ret_ft == ret_c)
		test_success++;
	if (test_success == 3)
		printf("ft_atoi : OK\n");
	else
		printf("ft_atoi : test failed\n");
	//Reset value
	test_success = 0;
	//Test memchr
	printf("/******Test memchr******\\\n");
	ret_memchr_ft = ft_memchr(str1_memchr, 'f', 15);
	ret_memchr_c = memchr(str1_memchr, 'f', 15);
	if (ret_memchr_ft == ret_memchr_c)
		test_success++;
	ret_memchr_ft = ft_memchr(str2_memchr, '3', 15);
	ret_memchr_c = memchr(str2_memchr, '3', 15);
	if (ret_memchr_ft == ret_memchr_c)
		test_success++;
	ret_memchr_ft = ft_memchr(str3_memchr, 'b', 15);
	ret_memchr_c = memchr(str3_memchr, 'b', 15);
	if (ret_memchr_ft == ret_memchr_c)
		test_success++;
	if (test_success == 3)
		printf("ft_memchr : OK\n");
	else
		printf("ft_memchr : test failed\n");
	//Reset value
	test_success = 0;
	//Test memcmp
	printf("/******Test memcmp******\\\n");
	ret_ft = ft_memcmp(ncmp1, ncmp2, 5);
	ret_c = memcmp(ncmp1, ncmp2, 5);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_memcmp(ncmp1, ncmp3, 6);
	ret_c = memcmp(ncmp1, ncmp3, 6);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_memcmp(ncmp1, ncmp4, 3);
	ret_c = memcmp(ncmp1, ncmp4, 3);
	if (ret_ft == ret_c)
		test_success++;
	ret_ft = ft_memcmp(ncmp2, ncmp4, 5);
	ret_c = memcmp(ncmp2, ncmp4, 5);
	if (ret_ft == ret_c)
		test_success++;
	if(test_success == 4)
		printf("ft_memcmp : OK\n");
	else
		printf("ft_memcmp : test failed\n");
	//Reset value
	test_success = 0;
	//Test memcpy
	printf("/******Test memcpy******\\\n");
	ret_memcpy_ft = ft_memcpy(dst_memcpy_ft, str1_memcpy, 11);
	ret_memcpy_c = memcpy(dst_memcpy_c, str1_memcpy, 11);
	ret_strcmp = strcmp(dst_memcpy_ft, dst_memcpy_c);
	if (ret_memcpy_ft == ret_memcpy_c && ret_strcmp == 0)
		printf("OK\n");
	else
		printf("NOPE\n");
	printf("ret ft :%s\n", ret_memcpy_ft);
	printf("ret c :%s\n", ret_memcpy_c);
	printf("dst ft :%s\n", dst_memcpy_ft);
	printf("dst c :%s\n", dst_memcpy_c);
	//Reset value

	return (0);
}
