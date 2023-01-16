/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yshimoma <yshimoma@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:39:43 by yshimoma          #+#    #+#             */
/*   Updated: 2023/01/15 17:42:51 by yshimoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include<string.h>
// #include<stdio.h>
// #include<stdlib.h>
/*
** 与えられた文字列の桁数を返す
*/
// size_t	ft_strlen(const char *s)
// {
// 	size_t	i;

// 	i = 0;
// 	while (s != 0 && s[i] != '\0')
// 		i++;
// 	return (i);
// }

/*
** 文字型配列destのうしろに文字列srcを連結します。
** 最大でsize - strlen(dst) - 1バイトを追記（-1バイトに'\0'を追加）
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result_num;

	if (src[0] == '\0')
		return (0);
	if (dstsize != 0)
		result_num = ft_strlen(dst) + ft_strlen(src);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
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

// int	main(void)
// {
//     char str1[50] = "ABCDEF123456789";
//     const char str2[] = "123";
//     char str3[50] = "ABCDEF123456789";
//     const char str4[] = "123";
// 	char *dst2 = calloc(100, sizeof(char));
// 	char *dst3 = calloc(100, sizeof(char));

// 	ft_strlcat(dst2, "hello", 100);
// 	printf("ft_strlcat : %s\n",dst2);
// 	strlcat(dst3, "hello", 100);
// 	printf("strlcat : %s\n",dst3);
//     // printf("%lu\n", strlcat(str1, str2, 40));
// 	// printf("%s\n", str1);
//     // printf("%lu\n", strlcat(str1, str2, 21));
// 	// printf("%s\n", str1);
// 	// printf("\n");
//     // printf("%zu\n", ft_strlcat(str3, str4, 40)); 
//     // printf("%s\n", str3);
// 	// printf("%zu\n", ft_strlcat(str3, str4, 21));
// 	// printf("%s\n", str3);
//     return (0);
// }