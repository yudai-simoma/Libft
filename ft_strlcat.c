/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:39:43 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/27 21:03:30 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// /*
// ** 与えられた文字列の桁数を返す
// */
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }

// /*
// ** 引数のエラーチェックをする
// */
// static void	ft_err_check(char *dst, const char *src, size_t dstsize)
// {
// 	if (src == NULL)
// 		ft_strlen(NULL);
// 	if (dst == NULL && dstsize != 0)
// 		ft_strlen(NULL);
// }

/*
** 与えられた文字列の桁数を返すかつ、NULLでもsegmentation fault	を起こさない
*/
static size_t	ft_strlen_null(const char *s)
{
	size_t	i;

	i = 0;
	while (s != NULL && s[i] != '\0')
		i++;
	return (i);
}

/*
** 文字型配列destのうしろに文字列srcを連結します。
** 最大でsize - strlen(dst) - 1バイトを追記（-1バイトに'\0'を追加）
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result_num;

	if (dst == NULL && dstsize != 0)
		ft_strlen(NULL);
	if (dstsize != 0)
		result_num = ft_strlen_null(dst) + ft_strlen(src);
	if (ft_strlen_null(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen_null(dst);
	j = 0;
	while (i + 1 < dstsize && j < ft_strlen(src))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (result_num);
}

// #include<string.h>
// #include<stdio.h>
// #include<stdlib.h>
// int	main(void)
// {
//     // char str1[50] = "ABCDEF123456789";
//     // const char str2[] = "123";
//     // char str3[50] = "ABCDEF123456789";
//     // const char str4[] = "123";
// 	// char *dst2 = calloc(100, sizeof(char));
// 	// char *dst3 = calloc(100, sizeof(char));

// 	// ft_strlcat(str1, NULL, 5);
// 	// printf("ft_strlcat : %s\n",dst2);
// 	// strlcat(str1, NULL, 5);
// 	// printf("strlcat : %s\n",dst3);

//     // printf("%lu\n", strlcat(str1, str2, 40));
// 	// printf("%s\n", str1);
//     // printf("%lu\n", strlcat(str1, str2, 21));
// 	// printf("%s\n", str1);
// 	// printf("\n");
//     // printf("%zu\n", ft_strlcat(str3, str4, 40)); 
//     // printf("%s\n", str3);
// 	// printf("%zu\n", ft_strlcat(str3, str4, 21));
// 	// printf("%s\n", str3);

// 	char dest[30]; 
// 	memset(dest, 0, 30); 
// 	memset(dest, '1', 10);
// 	char dest1[30]; 
// 	memset(dest1, 0, 30); 
// 	memset(dest1, '1', 10);
// 	printf("strlcat : %lu\n", strlcat(dest, "", 15));
// 	printf("%s\n", dest);
// 	printf("ft_strlcat : %lu\n", ft_strlcat(dest1, "", 15));
// 	printf("%s\n", dest1);
//     return (0);
// }
